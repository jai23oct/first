#include<iostream>
using namespace std;
int i=2;
class tic
{int x[5],y[5],w[5],z[5]; 
//yo
    public:

    void n_step1()
    {cout<<"\nenter row and column in which you want your tic";
    cin>>x[0]>>y[0];
    }
    void n_step2()
    {
    if(x[0]==2 & y[0]==2)
    {
        cout<<"\n \nmy cross is at row 1 column 1" ;
    }
    else
    {
        cout<<"\n \nmy cross is at row 2 column 2";

    }
    }
    void n_step3()
     {
            cout<<"\nenter row and column in which you want your tic";
            cin>>x[1]>>y[1];

     }
     void n_step4()
     {if(x[0]==1)
       { if(y[0]==1)
     {
            if(x[1]==1)
            {
                if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 1 column 3";
                }
                else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 1 column 2";
                }
                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 1 column 2";
                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }
                    else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 2 column 1";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }

        }

          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                    cout<<"\nmy cross is at row 1 column 3";
                }
                else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 1 column 1";
                }
                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 1";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 1 column 3";
                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }
                    else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 2 column 3";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }

     }

            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                    cout<<"\nmy cross is at row 1 column 2";
                }
                else if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 1 column 1";
                }
                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 2";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }
                    else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 2 column 3";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 2 column 3";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }

}

     }

     else if(x[0]==2)
       { if(y[0]==1)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                    cout<<"\nmy cross is at row 3 column 1";
                }
                else if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 1 column 1";
                }
                else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 1 column 2";
                }

                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 1 column 3";
                    }

                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 1";
                    }
                    else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 2";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }
}



          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 3 column 2";
                }
                else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 3 column 1";
                }
                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 2 column 3";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 3";
                    }
                    else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 1 column 2";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 1";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }

     }


            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                    cout<<"\nmy cross is at row 1 column 2";
                }
                else if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 1 column 3";
                }
                   else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 3 column 3";
                }

                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 1";
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 3 column 2";
                    }
                    else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 3 column 3";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 1 column 3";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }


    }

     }
     else if(x[0]==3)
       {
       if(y[0]==1)
            {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                    cout<<"\nmy cross is at row 2 column 1";
                }
                else if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 1 column 1";
                }
                else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 1 column 2";
                }

                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 1";
                    }
                         else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 1 column 2";
                    }


                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 3 column 3";
                    }

                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 2";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }
                }



          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                    cout<<"\nmy cross is at row 2 column 1";
                }
                else if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 3 column 1";
                }
                else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 2 column 3";
                }
                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }
                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 3";
                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 3 column 3";
                    }

                    else if(y[1]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 1";

                    }
                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }

     }

            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                    cout<<"\nmy cross is at row 1 column 2";
                }
                else if(y[1]==2)
                {
                    cout<<"\nmy cross is at row 2 column 3";
                }
                   else if(y[1]==3)
                {
                    cout<<"\nmy cross is at row 2 column 3";
                }

                else
                {
                    cout<<"enter a valid choice";
                    cin>>x[1]>>y[1];
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 3 column 2";
                    }
                        else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 1 column 3";
                    }
                         else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }
                    }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                        cout<<"\nmy cross is at row 3 column 2";
                    }
                    else if(y[1]==2)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }

                    else
                    {
                        cout<<"enter a valid choice";
                        cin>>x[1]>>y[1];
                    }

                }

}

     }

     }



  void n_step5()
     {
            cout<<"\nenter row and column in which you want your tic";
            cin>>x[2]>>y[2];

     }
     void n_step6()
     {if(x[0]==1)
       {
       if(y[0]==1)
        {
            if(x[1]==1)
            {
                if(y[1]==2)
                {
                    if(x[2]==3 & y[2]==1)
                    {
                        cout<<"\nmy cross is at row 2 column 1";

                    }
                    else
                    {
                        cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                    }
                }
                else if(y[1]==3)
                {
                    if(x[2]==3 & y[2]==2)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }
                    else
                    {
                        cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                    }

                }


            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }
                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                        }

                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                            else
                        {
                            cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                            else
                        {
                            cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                        }


                    }

                }

            }

          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                        if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 2 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }
                }
                else if(y[1]==3)
                {
                        if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 2 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                            else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }
                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                            else
                        {
                            cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                            else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                            else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }

                    }

                }

     }

            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                        if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 2 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }
                }
                else if(y[1]==2)
                {
                        if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 2 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                }


            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==1 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 1 and I win"; i=0;
                        }
                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }

                    }

                }

}

     }

     else if(x[0]==2)
       { if(y[0]==1)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                        if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }
                }
                else if(y[1]==2)
                {
                        if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                }
                else if(y[1]==3)
                {
                        if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }
                }


            }
            else if(x[1]==2)
                {
                    if(y[1]==3)
                    {
                           if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }
                    }


                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==1 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 2 and I win"; i=0;
                        }

                    }


                }

    }

          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==2)
                {if(x[2]==1)
                {
                    if(y[2]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }

                }
                  else if(x[2]==2)
                {
                    if(y[2]==1)
                    {
                        cout<<"\nmy cross is at row 2 column 3";
                    }
                    else if(y[2]==3)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }

                }
                    else if(x[2]==3)
                {
                    if(y[2]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 3";
                    }
                    else if(y[2]==3)
                    {
                        cout<<"\nmy cross is at row 2 column 1";
                    }

                }

                }
                else if(y[1]==3)
                {
                    if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 2 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        if(x[2]==1)
                {
                    if(y[2]==2)
                    {
                        cout<<"\nmy cross is at row 3 column 2";
                    }
                    else if(y[2]==3)
                    {
                        cout<<"\nmy cross is at row 3 column 1";
                    }
                }

                    else if(x[2]==3)
                {
                    if(y[2]==1)
                    {
                        cout<<"\nmy cross is at row 1 column 3";
                    }
                    else if(y[2]==2)
                    {
                        cout<<"\nmy cross is at row 1 column 2";
                    }
                    else if(y[2]==3)
                    {
                        cout<<"\nmy cross is at row 1 column 2";
                    }

                }
                    }
                    else if(y[1]==3)
                    {
                               if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }

                    }
                    }

                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                              if(x[2]==1 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 3 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 2 and I win"; i=0;
                        }
                    }
                    else if(y[1]==2)
                    {
                               if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {
                               if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 2 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }

                    }


                }


     }

            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                           if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }
                }
                else if(y[1]==2)
                {
                           if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }
                }
                   else if(y[1]==3)
                {
                           if(x[2]==1 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 1 and I win"; i=0;
                        }
                }


            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                                if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                    }
                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                                 if(x[2]==1 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 2 and I win"; i=0;
                        }
                    }
                    else if(y[1]==2)
                    {
                                 if(x[2]==1 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 1 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {
                                 if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 3 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }

                    }


                }

}

     }

     else if(x[0]==3)
       { if(y[0]==1)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {

                                 if(x[2]==2 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                        }
                }
                else if(y[1]==2)
                {

                                 if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                }
                else if(y[1]==3)
                {

                                 if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 3 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }
                }

    }


            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {

                                 if(x[2]==3 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                        }
                    }
                         else if(y[1]==3)
                    {

                                 if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 3 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }
                    }



                }
                   else if(x[1]==3)
                {
                    if(y[1]==2)
                    {

                                 if(x[2]==1 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 2 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 1 and I win"; i=0;
                        }
                    }

                    else if(y[1]==3)
                    {

                                 if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }

                    }


                }

        }

          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {

                                 if(x[2]==2 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                        }
                }
                else if(y[1]==2)
                {

                                 if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }
                }
                else if(y[1]==3)
                {

                                 if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {

                                 if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 1 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }
                    }
                    else if(y[1]==3)
                    {

                                 if(x[2]==1 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 1 and I win"; i=0;
                        }
                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {

                                 if(x[2]==1 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 2 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 1 and I win"; i=0;
                        }
                    }

                    else if(y[1]==3)
                    {

                                 if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 2 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }

                    }


                }

     }

            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                                 if(x[2]==3 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 3 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                        }

                }
                else if(y[1]==2)
                {
                                 if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 2 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }

                }
                   else if(y[1]==3)
                {
                                 if(x[2]==2 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 1 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                        }

                }



            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                                   if(x[2]==1 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 1 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 2 and I win"; i=0;
                        }

                    }
                        else if(y[1]==2)
                    {
                                     if(x[2]==3 & y[2]==1)
                        {
                            cout<<"\nmy cross is at row 3 column 2";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                        }

                    }

                    }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                                     if(x[2]==1 & y[2]==2)
                        {
                            cout<<"\nmy cross is at row 2 column 1";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 2 and I win"; i=0;
                        }

                    }
                    else if(y[1]==2)
                    {
                                     if(x[2]==1 & y[2]==3)
                        {
                            cout<<"\nmy cross is at row 2 column 3";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win"; i=0;
                        }

                    }


                }

}

     }

}
void n_step7()
     {
            cout<<"\nenter row and column in which you want your tic";
            cin>>x[3]>>y[3];


     }

void n_step8()
  {if(x[0]==1)
       { if(y[0]==1)
     {
            if(x[1]==1)
            {
                if(y[1]==2)
                {
                    if(x[2]==3 & y[2]==1)
                    {

                            if(x[3]==2 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                            }

                    }
                                  }
                else if(y[1]==3)
                {
                    if(x[2]==3 & y[2]==2)
                    {
                            if(x[3]==2 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                            }

                    }

                }


            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==1 & y[2]==3)
                        {
                                if(x[3]==3 & y[3]==2)
                                {
                                    cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                                }
                                else
                                {
                                   cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                                }

                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==3 & y[2]==2)
                        {
                                if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }

                        }

                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                                if(x[3]==3 & y[3]==2)
                                {
                                    cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                                }
                                else
                                {
                                   cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                                }

                        }

                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                                if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }

                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                                if(x[3]==3 & y[3]==1)
                                {
                                    cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                                }
                                else
                                {
                                   cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                                }

                        }


                    }

                }

    }

          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                        if(x[2]==3 & y[2]==1)
                        {
                            if(x[3]==2 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                            }

                        }

                }
                else if(y[1]==3)
                {
                        if(x[2]==3 & y[2]==3)
                        {
                            if(x[3]==2 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                            }

                        }

                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==3 & y[2]==3)
                        {
                                if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }

                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==3 & y[2]==1)
                        {
                                if(x[3]==3 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                            }

                        }

                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                                if(x[3]==3 & y[3]==3)
                                {
                                    cout<<"\nmy cross is at row 3 column 2 and I lose";
                                }
                                else
                                {
                                   cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                                }

                        }

                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==1 & y[2]==3)
                        {
                                if(x[3]==3 & y[3]==3)
                                {
                                    cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                                }
                                else
                                {
                                   cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                                }

                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==2 & y[2]==1)
                        {
                                if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and I lose";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }

                        }


                    }

                }

     }

            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                        if(x[2]==3 & y[2]==2)
                        {
                            if(x[3]==2 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 2 column 3 and I win"; i=0;
                            }

                        }

                }
                else if(y[1]==2)
                {
                        if(x[2]==3 & y[2]==3)
                        {
                            if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                            }

                        }
                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==3 & y[2]==2)
                        {
                            if(x[3]==3 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 2 column 3 and I lose";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                            }

                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==1 & y[2]==1)
                        {
                            if(x[3]==3 & y[3]==2)
                            {
                                cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                            }

                        }

                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==2 & y[2]==3)
                        {
                                if(x[3]==1 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 1 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 1 column 1 and I win"; i=0;
                            }

                        }

                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==2 & y[2]==1)
                        {
                                    if(x[3]==3 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                            }
                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==2 & y[2]==1)
                        {
                                    if(x[3]==3 & y[3]==2)
                            {
                                cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                            }
                        }


                    }

                }

}

     }

     else if(x[0]==2)
       { if(y[0]==1)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                        if(x[2]==3 & y[2]==1)
                        {
                                    if(x[3]==3 & y[3]==2)
                            {
                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 2 and I win"; i=0;
                            }
                        }

                }
                else if(y[1]==2)
                {
                        if(x[2]==3 & y[2]==3)
                        {
                                    if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }
                        }

                }
                else if(y[1]==3)
                {
                        if(x[2]==3 & y[2]==2)
                        {
                                if(x[3]==3 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 3 column 1 and I lose";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                            }
                        }

                }


            }

            else if(x[1]==2)
                {
                    if(y[1]==3)
                    {
                           if(x[2]==3 & y[2]==1)
                        {
                                if(x[3]==1 & y[3]==2)
                            {
                                cout<<"\nmy cross is at row 3 column 3 and I win";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 1 column 2 and I win"; i=0;
                            }
                        }

                    }


                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                            if(x[2]==3 & y[2]==3)
                        {
                                    if(x[3]==1 & y[3]==2)
                            {
                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 1 column 2 and I win"; i=0;
                            }
                        }

                    }
                    else if(y[1]==2)
                    {
                            if(x[2]==1 & y[2]==3)
                        {
                                    if(x[3]==3 & y[3]==3)
                            {
                                cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 3 and I win"; i=0;
                            }
                        }

                    }
                    else if(y[1]==3)
                    {
                            if(x[2]==1 & y[2]==2)
                        {
                                if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 1 column 1 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }
                        }


                    }


                }

}

          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==2)
                {if(x[2]==1)
                {
                    if(y[2]==3)
                    {
                            if(x[3]==2 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 3 column 3 and I win";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 2 column 1 and I win"; i=0;
                            }
                    }

                }
                  else if(x[2]==2)
                {
                    if(y[2]==1)
                    {
                        if((x[3]==3 & y[3]==1)|(x[3]==1 & y[3]==3))
                        {
                            cout<<"\nmy cross is at row "<<y[3]<<"column "<<x[3]<<"and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                        }
                    }
                    else if(y[2]==3)
                    {
                        if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }
                    }

                }
                    else if(x[2]==3)
                {
                    if(y[2]==1)
                    {
                        if((x[3]==2 & y[3]==1)|(x[3]==3 & y[3]==3))
                        {
                            cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and it is a tie";
                        }
                    }
                    else if(y[2]==3)
                    {
                        if(x[3]==3 & y[3]==1)
                            {
                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                            }
                            else
                            {
                               cout<<"\nmy cross is at row 3 column 1 and I win"; i=0;
                            }
                    }

                }

                }
                else if(y[1]==3)
                {
                    if(x[2]==2 & y[2]==1)
                        {
                                if((x[3]==3 & y[3]==2)|(x[3]==3 & y[3]==3))
                                            {
                                                cout<<"\nmy cross is at row 1 column 2 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                                            }

                        }

                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                        if(x[2]==1)
                {
                    if(y[2]==2)
                    {
                        if((x[3]==3 & y[3]==1)|(x[3]==1 & y[3]==3))
                        {
                            cout<<"\nmy cross is at row "<<y[3]<<"column "<<x[3]<<"and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                        }
                    }
                    else if(y[2]==3)
                    {
                        if((x[3]==1 & y[3]==2)|(x[3]==3 & y[3]==3))
                        {
                            cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 2 and it is a tie";
                        }
                    }
                }

                    else if(x[2]==3)
                {
                    if(y[2]==1)
                    {
                            if(x[3]==3 & y[3]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 3 column 3 and I win";
                        }
                    }
                    else if(y[2]==2)
                    {
                               if(x[3]==1 & y[3]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win";
                        }
                    }
                    else if(y[2]==3)
                    {
                              if(x[3]==1 & y[3]==3)
                        {
                            cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 1 column 3 and I win";
                        }
                    }

                }
                    }
                    else if(y[1]==3)
                    {
                               if(x[2]==3 & y[2]==1)
                        {
                                          if(x[3]==1 & y[3]==2)
                            {
                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                            }
                            else
                            {
                                cout<<"\nmy cross is at row 1 column 2 and I win";
                            }
                          }


                    }
                    }

                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                              if(x[2]==1 & y[2]==2)
                        {
                             if((x[3]==2 & y[3]==1)|(x[3]==3 & y[3]==3))
                        {
                            cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                        }
                        else
                        {
                            cout<<"\nmy cross is at row 2 column 1 and it is a tie";
                        }
                        }

                    }
                    else if(y[1]==2)
                    {
                               if(x[2]==1 & y[2]==3)
                        {
                                if(x[3]==2 & y[3]==1)
                                {
                                    cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                                }
                                else
                                {
                                    cout<<"\nmy cross is at row 2 column 1 and I win";
                                }
                        }

                    }
                    else if(y[1]==3)
                    {
                               if(x[2]==2 & y[2]==1)
                        {
                                              if((x[3]==1 & y[3]==2)|(x[3]==3 & y[3]==3))
                                            {
                                                cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 2 and it is a tie";
                                            }
                        }

                    }


                }


    }
            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                           if(x[2]==3 & y[2]==2)
                        {
                              if(x[3]==3 & y[3]==1)
                                {
                                    cout<<"\nmy cross is at row 3 column 3 and I lose";
                                }
                                else
                                {
                                    cout<<"\nmy cross is at row 3 column 1 and I win";
                                }
                        }

                }
                else if(y[1]==2)
                {
                           if(x[2]==3 & y[2]==1)
                        {
                              if(x[3]==3 & y[3]==3)
                                {
                                    cout<<"\nmy cross is at row 3 column 2 and it is a tie";
                                }
                                else
                                {
                                    cout<<"\nmy cross is at row 3 column 3 and I win";
                                }
                        }

                }
                   else if(y[1]==3)
                {
                           if(x[2]==1 & y[2]==1)
                        {
                              if(x[3]==3 & y[3]==2)
                                {
                                    cout<<"\nmy cross is at row 2 column 1 and it is a tie";
                                }
                                else
                                {
                                    cout<<"\nmy cross is at row 3 column 2 and I win";
                                }
                        }

                }


            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                                if(x[2]==3 & y[2]==3)
                        {
                                  if(x[3]==1 & y[3]==2)
                                    {
                                        cout<<"\nmy cross is at row 3 column 1 and I win";
                                    }
                                    else
                                    {
                                        cout<<"\nmy cross is at row 1 column 2 and I win";
                                    }
                        }

                    }
                    }

                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                                 if(x[2]==1 & y[2]==2)
                        {
                                    if(x[3]==3 & y[3]==3)
                                        {
                                            cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                                        }
                                        else
                                        {
                                            cout<<"\nmy cross is at row 3 column 3 and I win";
                                        }
                        }

                    }
                    else if(y[1]==2)
                    {
                                 if(x[2]==1 & y[2]==1)
                        {
                                    if(x[3]==3 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 1 and I win";
                                            }
                        }

                    }
                    else if(y[1]==3)
                    {
                                 if(x[2]==3 & y[2]==1)
                        {
                                    if(x[3]==1 & y[3]==2)
                                            {
                                                cout<<"\nmy cross is at row 2 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 2 and I win";
                                            }
                        }


                    }


                }

}

     }

     else if(x[0]==3)
       { if(y[0]==1)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {

                                 if(x[2]==2 & y[2]==3)
                        {
                                       if(x[3]==3 & y[3]==2)
                                            {
                                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 2 and I win";
                                            }
                        }

                }
                else if(y[1]==2)
                {

                                 if(x[2]==3 & y[2]==3)
                        {
                                     if((x[3]==2 & y[3]==1)|(x[3]==1 & y[3]==3))
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                                            }
                        }

                }
                else if(y[1]==3)
                {

                                 if(x[2]==3 & y[2]==2)
                        {
                                if(x[3]==1 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 2 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 1 and I win";
                                            }

                        }

                }



            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {

                                 if(x[2]==3 & y[2]==3)
                        {
                                    if(x[3]==1 & y[3]==2)
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 2 and I win";
                                            }

                        }

                    }
                         else if(y[1]==3)
                    {

                                 if(x[2]==3 & y[2]==2)
                        {
                                    if(x[3]==1 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 2 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 1 and I win";
                                            }

                        }

                    }



                }
                   else if(x[1]==3)
                {
                    if(y[1]==2)
                    {

                                 if(x[2]==1 & y[2]==1)
                        {
                                    if(x[3]==2 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and I win";
                                            }

                        }

                    }

                    else if(y[1]==3)
                    {

                                 if(x[2]==2 & y[2]==1)
                        {
                                    if(x[3]==2 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and I win";
                                            }

                        }


                    }


                }
}


          else if(y[0]==2)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {

                                 if(x[2]==2 & y[2]==3)
                        {
                                     if(x[3]==3 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 3 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 1 and I win";
                                            }

                        }

                }
                else if(y[1]==2)
                {

                                 if(x[2]==1 & y[2]==3)
                        {
                                    if(x[3]==3 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 3 and I win";
                                            }

                        }

                }
                else if(y[1]==3)
                {

                                 if(x[2]==2 & y[2]==1)
                        {
                                    if(x[3]==3 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 3 and I win";
                                            }

                        }

                }

            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {

                                 if(x[2]==1 & y[2]==3)
                        {
                                    if(x[3]==3 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 3 and I win";
                                            }

                        }

                    }
                    else if(y[1]==3)
                    {

                                 if(x[2]==1 & y[2]==1)
                        {
                                    if(x[3]==3 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 2 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 1 and I win";
                                            }

                        }

                    }

                }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {

                                 if(x[2]==1 & y[2]==1)
                        {
                                    if(x[3]==2 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and I win";
                                            }

                        }

                    }

                    else if(y[1]==3)
                    {

                                 if(x[2]==1 & y[2]==3)
                        {
                                    if(x[3]==2 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 1 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 2 column 1 and I win";
                                            }

                        }


                    }


                }

     }

            else if(y[0]==3)
     {
            if(x[1]==1)
            {
                if(y[1]==1)
                {
                                 if(x[2]==3 & y[2]==2)
                        {
                                    if(x[3]==1 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 3 and I win";
                                            }

                        }


                }
                else if(y[1]==2)
                {
                                 if(x[2]==2 & y[2]==1)
                        {
                                    if(x[3]==3 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 1 column 1 and it I lose";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 1 and I win";
                                            }

                        }

                }
                   else if(y[1]==3)
                {
                                 if(x[2]==2 & y[2]==1)
                        {
                                        if(x[3]==3 & y[3]==2)
                                            {
                                                cout<<"\nmy cross is at row 3 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 2 and I win";
                                            }

                        }


                }



            }
            else if(x[1]==2)
                {
                    if(y[1]==1)
                    {
                                   if(x[2]==1 & y[2]==2)
                        {
                                        if(x[3]==3 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 1 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 3 column 1 and I win";
                                            }

                        }

                    }
                        else if(y[1]==2)
                    {
                                     if(x[2]==3 & y[2]==1)
                        {
                                        if(x[3]==1 & y[3]==2)
                                            {
                                                cout<<"\nmy cross is at row 1 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 1 column 2 and I win";
                                            }

                        }


                    }

                    }
                   else if(x[1]==3)
                {
                    if(y[1]==1)
                    {
                                     if(x[2]==1 & y[2]==2)
                        {
                                        if(x[3]==2 & y[3]==3)
                                            {
                                                cout<<"\nmy cross is at row 1 column 3 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 2 column 3 and I win";
                                            }

                        }


                    }
                    else if(y[1]==2)
                    {
                                     if(x[2]==1 & y[2]==3)
                        {
                                        if(x[3]==2 & y[3]==1)
                                            {
                                                cout<<"\nmy cross is at row 1 column 1 and it is a tie";
                                            }
                                            else
                                            {
                                                cout<<"\nmy cross is at row 2 column 1 and I win";
                                            }

                        }
                                          }


                }

}

     }
     }



};

int main()
{tic x;
x.n_step1();
x.n_step2();
x.n_step3();
x.n_step4();
x.n_step5();
x.n_step6();

if(i!=0)
{
x.n_step7();
x.n_step8();
}
return 0;
}













