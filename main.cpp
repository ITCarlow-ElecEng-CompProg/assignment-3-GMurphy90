/** Computer Programming
 *  Standard Deviation Calculator
 *  C00187998
 *  Gerard Murphy
 *  25/09/17
 */
#include <iostream>
#include<math.h>/**< preprocessor directives */

using namespace std;

int main()
{
    cout << "Standard Deviation Calculator" << endl;/**< Title */

    int i=0;
    double array[10]={0}, sum1=0, sum=0, mean, standDev;/**< variable declarations */

        for(i=0; i<10; i++)/**< for loop calculating sum of array fo values */

    {
        cout<<"Enter value: ";
        cin>>array[i];
        sum=sum+array[i];
    }

    mean=sum/10;

    cout<<"arithmetic value: " <<mean;

    for(i=0; i<10; i++)

    {
        sum1=sum1+(pow((array[i]-mean), 2)/9);

    }

    standDev=pow(sum1, 0.5);/**< standard deviation calculation */

    cout<<"Standard Deviation: "<<standDev<<endl;/**< output answer */
    return 0;
}
