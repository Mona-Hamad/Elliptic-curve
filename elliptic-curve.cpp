#include <iostream>
#include<cmath>
using namespace std;


int main()
{


    int a,b,x1,x2,y1,y2,x3,y3,p,c,q,s,w,o=0,lasts,x,lastx,temp,temp1,temp2,temp3;

    cout << "Geben Sie die Parameter a,b,p ein " << endl;
    cin >> a;
    cin >> b;
    cin >> p;
    o=p;
    cout << "Geben Sie den ersten Punkt ein" << endl;
    cout << "x1" << endl;
    cin >> x1;
    cout << "y1" << endl;
    cin >> y1;
    cout << "Geben Sie den zweiten Punkt ein" << endl;
    cout << "x2" << endl;
    cin >> x2;
    cout << "y2" << endl;
    cin >> y2;



    //1
    if(x1!=x2 and y1!=y2)

    {
        //2
        c= (int)(x2-x1) %p;
        if(c < 0)
        {
            c=c+o;
        }

        //3
        if (c>p) {//we switch them
            temp=p; p=c; c=temp;
        }


        //begin function
        s=0;
        x=1;
        lasts=1;
        lastx=0;
        while (c!=0) {
            q= p/c;
            temp1= p%c;
            p=c;
            c=temp1;

            temp2 = s;
            s=lasts-q*s;
            lasts = temp2;

            temp3 = x;
            x = lastx-q*x;
            lastx=temp3;
        }
        //*
        if (lastx==0)
        {
            cout << "Der Punkt im Unendlich "<<endl;
            return 0;
        }



        //4
        if(lastx < 0)
        {
            lastx=lastx+o;
        }

        //5
        w= (int)((y2-y1)*lastx) %o;
        if(w < 0)
        {
            w=w+o;
        }


        //6
        x3= (int)(pow(w,2)-x1-x2) %o;
        //7
        if(x3 < 0)
        {
            x3=x3+o;
        }
        //8
        y3= (int) ((w*(x1-x3))-y1) %o;
        //9
        if(y3 < 0)
        {
            y3=y3+o;
        }
        //10
        cout << "R=(" << x3 <<"," << y3 << ")" <<endl;

    }




        //1
        if (x1==x2 )
            if (y1==y2)
           {

                //2
                c= (int)(2*y1) %p;
                if(c < 0)
                {
                    c=c+o;
                }

                //3
                if (c>p) {//we switch them
                    temp=p; p=c; c=temp;
                }


                //begin function
                s=0;
                x=1;
                lasts=1;
                lastx=0;
                while (c!=0) {
                    q= p/c;
                    temp1= p%c;
                    p=c;
                    c=temp1;

                    temp2 = s;
                    s=lasts-q*s;
                    lasts = temp2;

                    temp3 = x;
                    x = lastx-q*x;
                    lastx=temp3;
                }

               //*
               if (lastx==0)
               {
                   cout << "Der Punkt im Unendlich "<<endl;
                   return 0;
               }


                //4
                if(lastx < 0)
                {
                    lastx=lastx+o;
                }

                //5
                w= (int)(((3*pow(x1,2))+a)*lastx) %o;
                if(w < 0)
                {
                    w=w+o;
                }

                //6
                x3= (int)(pow(w,2)-x1-x2) %o;
                //7
                if(x3 < 0)
                {
                    x3=x3+o;
                }
                //8
                y3= (int) ((w*(x1-x3))-y1) %o;
                //9
                if(y3 < 0)
                {
                    y3=y3+o;
                }
                //10
                 cout << "R=(" << x3 <<"," << y3 << ")" <<endl;
           }




    //1
    if(x1==x2 and y1!=y2)

    {
        //2
        c= (int)(x2-x1) %p;
        if(c < 0)
        {
            c=c+o;
        }

        //3
        if (c>p) {//we switch them
            temp=p; p=c; c=temp;
        }


        //begin function
        s=0;
        x=1;
        lasts=1;
        lastx=0;
        while (c!=0) {
            q= p/c;
            temp1= p%c;
            p=c;
            c=temp1;

            temp2 = s;
            s=lasts-q*s;
            lasts = temp2;

            temp3 = x;
            x = lastx-q*x;
            lastx=temp3;
        }
        //*
        if (lastx==0)
        {
            cout << "Der Punkt im Unendlich "<<endl;
            return 0;
        }



        //4
        if(lastx < 0)
        {
            lastx=lastx+o;
        }

        //5
        w= (int)((y2-y1)*lastx) %o;
        if(w < 0)
        {
            w=w+o;
        }


        //6
        x3= (int)(pow(w,2)-x1-x2) %o;
        //7
        if(x3 < 0)
        {
            x3=x3+o;
        }
        //8
        y3= (int) ((w*(x1-x3))-y1) %o;
        //9
        if(y3 < 0)
        {
            y3=y3+o;
        }
        //10
        cout << "R=(" << x3 <<"," << y3 << ")" <<endl;

    }









    int z,i;

    {
        z= (int)(pow(y3,2)) %o;
        i= (int)(pow(x3,3)+(a*x3)+b) %o;
        if (z==i)
        {
            cout << " Der Punkt liegt auf der Kurv”<<endl;
            cout << z<<"="<<i <<endl;

        }
        else
        {
            cout << "Der Punkt liegt nicht auf der Kurve"<<endl;
            cout << z<<"!=" <<i <<endl;


        }
        return 0;
    }

    return 0;
}






