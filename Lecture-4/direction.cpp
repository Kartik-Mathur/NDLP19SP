#include<iostream>
using namespace std;


int main()
{
	char ch;
	int x=0,y=0;

	ch=cin.get();
	while(ch!='\n')
	{
	    
	    if(ch=='E')
	    {
	    	x++;
	    }
        else if(ch=='W')
        {
        	x--;
        }
        else if(ch=='N')
        {
        	y++;
        }

        else
        {
        	y--;
        }

	   ch=cin.get();
	}

	//Ist quadrant
    

    if(x>=0 && y>=0)
    {
        while(x>0)
        {
        	cout<<'E';
        	x--;
        } 

        while(y>0)
        {
        	cout<<'N';
        	y--;
        }
      
   }

   //2nd quadrant

    if(x<=0 && y>=0)
    {
    	x=-1*x;

    	while(y>0)
        {
        	cout<<'N';
        	y--;
        }

        while(x>0)
        {
        	cout<<'W';
        	x--;
        } 

       
    }


    //3rd quadrant 

    else if(x<=0 && y<=0)
    {
    	x=-1*x;
    	y=-1*y;

    	while(y>0)
        {
        	cout<<'S';
        	y--;
        }

        while(x>0)
        {
        	cout<<'W';
        	x--;
        } 

    }


    //4th quadrant

    else
    {
    	y=-1*y;

    	while(x>0)
        {
        	cout<<'E';
        	x--;
        }

    	while(y>0)
        {
        	cout<<'S';
        	y--;
        }

    }


   


	return 0;
}