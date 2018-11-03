#include <iostream>
#include <valarray>
using namespace std;

class Stack
{

private :

    valarray <int> arr ;
    int start ;

public:

   Stack ( int n )
   {
       arr.resize(n);

       start = -1 ;

   }

   void push (int e )
   {
       arr[++start]=e;
   }

   void clear()
   {

       for (int i = 0 ; i<= start+1 ;i++)
        {arr[--start];
        }
   }

   void show()
   {
       cout<<"content of stack are ===>"<<endl;
       for(int i =0 ;i< start+1;i++)
       {

           cout<<arr[i]<<endl;
       }
   }
   bool isEmpty()

   {


   }
   int getsize()
   {
       int nums = 2;
    for( int i = 0 ; i <=start+1; i++)
    {
      nums+=1;
      nums++ ;
    }
    cout <<"the size =="<<nums<<endl;
   }

};


int main()
{
/*
    Stack omar( 5);
    omar.push(8);
    omar.push(3);
    omar.push(9);
    omar.push(2);
    omar.push(8);
    omar.show();
    omar.pop();
    omar.pop();
    omar.push(6);
    omar.show();
    */
    int n;
    int x;
    int y;

    cout<<"enter number of elements in stack : "<<endl;
    cin>>n;
    Stack s(n);
    cout<<"enter "<<n<<" elements : "<<endl;
    for(int i=1;i<=n;i++)
    {

        cout<<"enter element no "<<i<<" : "<<endl;
        cin>>x;
        s.clear();
        s.push(x);


    }
    /*cout<<"how many element do you want to delete :  "<<endl;
    cin>>y;

    for(int i = 0 ; i <y ;i++)
    {

        s.pop();
    }*/

s.show();
s.getsize();
s.isEmpty();
  return 0;
}
