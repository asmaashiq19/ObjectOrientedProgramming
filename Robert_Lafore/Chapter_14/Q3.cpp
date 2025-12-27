
#include<iostream>

using namespace std;

const int QUEUE_SIZE = 3;

template <class T>
class Queue
{
private:
    int head;

    int tail;

    T arr[QUEUE_SIZE];

    int count;

public:
    class Full
    {
    };

    class Empty
    {
    };

    Queue() : head(), tail(), arr(), count() {}

    void push(const T &data)
    {
        if (count == QUEUE_SIZE)
        {
            throw Full();
        }
        arr[tail++] = data;
        count++;

        if (tail == QUEUE_SIZE)
        {
            tail = 0;
        }
    }

    T pop()
    {
        if (count == 0)
        {
            throw Empty();
        }
        T temp = arr[head++];
        arr[head - 1] = 0;
        count--;

        if (head == QUEUE_SIZE)
        {
            head = 0;
        }

        return temp;
    }

    void show() const
    {
        for (int i = 0; i < QUEUE_SIZE; ++i)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    };
};

int main()
{
    Queue<int> queue;
    int choice;
    int number;

    do
    {
        queue.show();

        cout << "1) - push" << endl
             << "2) - pop" << endl
             << "0) - quite" << endl
             << '>';
        cin >> choice;

        try
        {
            switch (choice)
            {
            case 1:
                cout << "Enter number:";
                cin >> number;

                queue.push(number);
                break;

            case 2:
                cout << "pop: " << queue.pop() << endl;
                break;

            case 0:
                return 0;

            default:
                cout << "Unknown operation!" << endl;
                break;
            }
        }
        catch (Queue<int>::Empty)
        {
            cout << "Error: queue is empty!" << endl;
        }
        catch (Queue<int>::Full)
        {
            cout << "Error: queue is full!" << endl;
        }
    } while (true);
}