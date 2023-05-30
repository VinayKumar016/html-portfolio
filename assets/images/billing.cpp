#include<iostream>
#include<conio.h>
#include<fstream>
#include<regex>
using namespace std;


class bill
{
    int code;
    float price;
    float discount;
    string name;
    public:
    string usrname="heybro";
string passw="Heybro123";
    void login();
    void menu();
    void admin();
    void customer();
    void add();
    void search();
    void edit();
    void del();
    void show();
    void list();
    void invoice();
};
void bill::login()
{
    int number,special,upper;
        string name,user_name,phone_no,pass,mail,user_name1,pass1,user_name2,pass2;
        page:
    cout<<"\n\n\n\t\t _________________________________________________________________"<<endl;
    cout<<"\t\t|                                                                 |"<<endl;
    cout<<"\t\t|                 W   E   L   C   O   M   E                       |"<<endl;
    cout<<"\t\t|_________________________________________________________________|"<<endl;
    cout<<"\t\t1. NEW USER!!! REGISTER FOR FREE"<<endl;
    cout<<"\t\t2. EXITING USER!!! LOGIN"<<endl;
    char sw;
    cout<<"\t\tENTER UR CHOICE=";
    cin>>sw;
    switch (sw){
    case '1':{
    {
        cout<<"\t\tFollow The Instructions To Complete Registration Form\n"<<endl;
        cout<<"\t\tUsername Should Be Unique\n"<<endl;
        cout<<"\t\tProper GMAIL Should BE Entered\n"<<endl;
        cout<<"\t\tPassword Must contain Atleast one Uppercase, one Lowercase and one Number\n"<<endl;
        cout<<"\t\tThe Password Must Contain Atleast 8 CHARACTERS\n"<<endl;
        bool upper_case = false;
    bool lower_case = false;
    bool number_case = false;
    bool special_char = false;
        cout<<"\t\tENTER YOUR NAME:";
        cin>>name;
        cout<<"\t\tENTER USER NAME:";
        cin>>user_name;
        cout<<"\t\tENTER MAIL ID:";
        invalid:
        cin>>mail;
        auto pattern{R"(^[A-z0-9._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,}$)"s};

                auto reg_ex=regex{pattern,regex_constants::icase};
        if(regex_match(mail,reg_ex))
        {

        }
        else
        {
            cout<<"\t\tINVALID EMAIL"<<endl;
            cout<<"\t\tRE-ENTER EMAIL:";
            goto invalid;
        }

        regex upper_case_expression{ "[A-Z]+" };
        regex lower_case_expression{ "[a-z]+" };
        regex number_expression{ "[0-9]+" };
        regex special_char_expression{ "[@!?]+"};
        bool done=false;
        do{
            password:
            cout<<"\t\tENTER PASSWORD:";
            cin>>pass;
            if(pass.length()<=8)
            {cout<<"\t\tTHE PASSWORD IS TOO SHORT\n\t\tTRY AGAIN ENTERING A STRONG PASSWORD\n";
            goto password;
            }
        else
        {
            upper_case=regex_search(pass,upper_case_expression);
            lower_case=regex_search(pass,lower_case_expression);
            number_case=regex_search(pass,number_expression);
            special_char=regex_search(pass,special_char_expression);
            int sum_of_pass=upper_case+lower_case+number_case+special_char;
            if(sum_of_pass<3)
            {
                cout<<"\t\tTHE PASSWORD DOES NOT CONTAIN REQUIRED EXPRESSION\n\t\tTRY AGAIN ENTERING VALID PASSWORD\n";
                goto password;
            }
            else
            {
                done=true;
            }
        }

        }while(!done);
        cout<<"\t\tENTER PHONE NUMBER:+91";
        cin>>phone_no;
         user_name1=user_name;
    pass1=pass;
    cout<<"\t\t\t\t\tSUCCESFULLY REGISTERED\n";
    goto page;
    }
    }
    case '2':
    {   username:
        cout<<"\t\tUSERNAME:";
        cin>>user_name2;
        if(user_name2==usrname)
        {}else if(user_name2==user_name){}else
        {
          cout<<"\t\tUSERNAME NOT FOUND\n\t\tTRY ENTERING A VALID USERNAME\n";
          goto username;
        }
        password1:
        cout<<"\t\tPASSWORD:";
        cin>>pass2;
        if(pass2==passw){}else if(pass2==pass1)
        {}else{
            cout<<"\t\tINVALID PASSWORD\n\t\tTRY ENTERING VALID PASSWORD\n";
            goto password1;
        }
    }
}
cout<<"\t\t\t\t\t SUCCESFULLY LOGGED IN\n\n";
}
void bill::menu()
{
    men:
    system("cls");
    char type,ch;
    string usr,pass;
    cout<<"\n\n\t\t\t\t\tSELECT AN USER TYPE:\n";
    cout<<"\t\t\t1.ADMINISTRATOR LOGIN\n";
    cout<<"\t\t\t2.CUSTOMER\n";
    cout<<"\t\t\t3.EXIT\n";
    cout<<"\t\t\tENTER UR CHOICE TO PROCEED FURTHER:";
    cin>>type;
    switch (type)
    {
        case '1':
        system("cls");
            admin();
        case '2':
            customer();
        case '3':
            exit(0);
        default:
                cout<<"\t\t\tINVALID CHOICE ENTRY!!";
    }
    getch();
    goto men;
}
void bill::admin()
{
    adm:
    system("cls");
    char fun;
    cout<<"\n\n\n\t\t\t\t\tADMINISTRATOR PAGE\n";
    cout<<"\n\t\t\t1. ADD PRODUCT\n";
    cout<<"\t\t\t2. SEARCH PRODUCT\n";
    cout<<"\t\t\t3. EDIT PRODUCT\n";
    cout<<"\t\t\t4. DELETE PRODUCT\n";
    cout<<"\t\t\t5. SHOW PRODUCTS\n";
    cout<<"\t\t\t6. RETURN TO PREVIOUS PAGE\n";
    cout<<"\n\t\t\tEnter The Function You Want To Perform:";
    cin>>fun;
    switch (fun)
    {
        case '1':
            add();
            break;
        case '2':
        search();
            break;
        case '3':
        edit();
            break;
        case '4':
        del();
            break;
        case '5':
        show();
            break;
        case '6':
        menu();
        default:
            cout<<"\t\t\tINVALID FUNCTION\n";
    }
    getch();
    goto adm;
}
void bill::customer()
{
    cus:
    system("cls");
    char cust;
    cout<<"\n\n\n\t\t\t\t\tCUSTOMER PAGE\n";
    cout<<"\n\t\t\t1. SALE PRODUCT\n";
    cout<<"\t\t\t2. RETURN TO MENU\n";
    cout<<"\t\t\tENTER YOUR CHOICE:";
    cin>>cust;
    switch (cust)
    {
        case '1':{
        invoice();
            break;}
        case '2':
            menu();
            break;
        default:
            cout<<"\t\t\tINVALID CHOICE ENTRY!!!\n";
    }
    getch();
    goto cus;
}
void bill::add()
{
    ad:
    system("cls");
    fstream file;
    int cod,found=0;
    float pric,dis;
    string nam;
    cout<<"\n\n\n\t\t\t\t\tADD NEW PRODUCT:\n";
    cout<<"\n\t\t\tPRODUCT CODE: ";
    cin>>code;
    cout<<"\t\t\tPRODUCT NAME: ";
    cin>>name;
    cout<<"\t\t\tPRODUCT PRICE: ";
    cin>>price;
    cout<<"\t\t\tPRODUCT DISCOUNT IN % : ";
    cin>>discount;
    file.open("product.txt",ios::in);
    if(!file)
    {
        file.open("product.txt",ios::app|ios::out);
        file<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
        file.close();
    }
    else
    {
        file>>cod>>nam>>pric>>dis;
    while(!file.eof())
    {
        if(cod==code)
        {
            found++;
        }
        file>>cod>>nam>>pric>>dis;
    }
    file.close();
    if(found==1)
    goto ad;
    else
    {
        file.open("product.txt",ios::app|ios::out);
        file<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
        file.close();
    }
    }
    cout<<"\t\t\tPRODUCT RECORDED SUCCESFULLY\n";
}
void bill::search()
{
    system("cls");
    fstream file;
    int p_code,found=0;
    cout<<"\n\n\n\t\t\t\t\tSearch Record:\n";
    cout<<"\n\t\t\tPRODUCT CODE:";
    cin>>p_code;
    file.open("product.txt",ios::in);
    if(!file)
    {
        cout<<"\t\t\tFILE OPENING ERROR\n";
    }
    else
    {
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            if(p_code==code)
            {
                system("cls");
                cout<<"\t\t\tSEARCH RECORD\n";
                cout<<"\t\t\tPRODUCT CODE:"<<code<<endl;
                cout<<"\t\t\tPRODUCT NAME:"<<name<<endl;
                cout<<"\t\t\tPRODUCT PRICE:"<<price<<endl;
                cout<<"\t\t\tPRODUCT DISCOUNT:"<<discount<<"%"<<endl;
                found++;
            }
            file>>code>>name>>price>>discount;
        }
        file.close();
        if(found==0)
        {
            cout<<"\t\t\tPRODUCT NOT FOUND!!\n";
        }
    }
}
void bill::edit()
{
    system("cls");
    fstream file,file1;
    int p_code,found=0,coo;
    float pri,diss;
    string na;
    cout<<"\n\n\n\t\t\t\t\tEdit Record:\n";
    cout<<"\n\t\t\tPRODUCT CODE:";
    cin>>p_code;
    file.open("product.txt",ios::in);
    if(!file)
    {
        cout<<"\t\t\tFILE OPENING ERROR\n";
    }
    else
    {
        file1.open("product1.txt",ios::app|ios::out);
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            if(p_code==code)
            {

                cout<<"\t\t\tPRODUCT NEW CODE:";
                cin>>coo;
                cout<<"\t\t\tPRODUCT NEW NAME:";
                cin>>na;
                cout<<"\t\t\tPRODUCT NEW PRICE:";
                cin>>pri;
                cout<<"\t\t\tPRODUCT NEW DISCOUNT IN %:";
                cin>>diss;
                file1<<" "<<coo<<" "<<na<<" "<<pri<<" "<<diss<<"\n";
                cout<<"\t\t\tPRODUCT EDIT SUCCESFULL!!!\n";
                found++;
            }
            else
            {
               file1<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
            }
            file>>code>>name>>price>>discount;
        }
        file.close();
        file1.close();
        remove("product.txt");
        rename("product1.txt","product.txt");
        if(found==0)
        {
            cout<<"\t\t\tPRODUCT NOT FOUND!!\n";
        }
    }

}
void bill::del()
{
    system("cls");
    fstream file,file1;
    int pro_cod,found=0;
    cout<<"\n\n\t\t\tDELETE PRODUCT\n";
    cout<<"\n\t\t\tPRODUCT CODE:";
    cin>>pro_cod;
    file.open("product.txt",ios::in);
    if(!file)
    {
        cout<<"\n\t\t\tFILE UNABLE TO OPEN\n";
    }
    else
    {
        file1.open("product1.txt",ios::app|ios::out);
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            if(code==pro_cod)
            {
                cout<<"\t\t\tPRODUCT DELETED SUCCESSFULLY!!";
                found++;
            }
            else
            {
                file1<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
            }
            file>>code>>name>>price>>discount;
        }
        file.close();
        file1.close();
        remove("product.txt");
        rename("product1.txt","product.txt");
        if(found==0)
        cout<<"\t\t\tPRODUCT NOT FOUND!!\n";
    }
}
void bill::show()
{
    system("cls");
    cout<<"\n\n\t\t\tSHOW PRODUCTS\n";
    fstream file;
    file.open("product.txt",ios::in);
    if(!file)
    {
        cout<<"\t\t\tFILE UNABLE TO OPEN\n";
    }
    else
    {
        cout<<"\n\t\t\tCODE\tNAME\tPRICE\tDISCOUNT%";
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            cout<<"\n\t\t\t"<<code<<"\t"<<name<<"\t"<<price<<"\t"<<discount;
            file>>code>>name>>price>>discount;
        }
        file.close();
    }
}
void bill::list()
{
    fstream file;
    file.open("product.txt",ios::in);
    cout<<"\n\t\t\t===============================================\n";
    cout<<"\t\t\tPRODUCT NO.\t\tNAME\t\tPRICE\n";
    cout<<"\t\t\t===============================================\n\n";
    file>>code>>name>>price>>discount;
    while(!file.eof())
    {
        cout<<"\t\t\t"<<code<<"\t\t"<<name<<"\t\t"<<price<<endl;
        file>>code>>name>>price>>discount;
    }
    file.close();
}
void bill::invoice()
{
    system("cls");
    char choice;
    int a[50],b[50],c=0,i;
    float amt=0,dis=0,total=0;
    fstream file;
    cout<<"\n\n\t\t\tINVOICE BILL GENERATOR!!\n";
    file.open("product.txt",ios::in);
    if(!file)
    {
        cout<<"\t\t\tNO STOCK FOUND!!";
    }
    else
    {
        file.close();
        list();
        cout<<"\n\t\t\t==========================================\n";
        cout<<"\t\t\t        P L A C E  Y O U R  O R D E R"<<endl;
        cout<<"\t\t\t==========================================\n";
        do
        {
            again:
            cout<<"\t\t\tENTER PRODUCT CODE:";
            cin>>a[c];
            cout<<"\t\t\tENTER QUANTITY:";
            cin>>b[c];
            for(i=0;i<c;i++)
            {
                if(a[c]==a[i])
                {
                    cout<<"\t\t\tREPEATED ORDER\n";
                    goto again;
                }
            }
            c++;
            cout<<"\n\t\t\tDO YOU WANT TO ORDER MORE PRODUCTS..(Y/N)\n";
            cin>>choice;
        }while(choice=='Y'||choice=='y');
        system("cls");
        cout<<"\t\t\t*******************************INVOICE BILL******************************\n";
        cout<<"\t\t\tPRODUCT NO.\tPRODUCT NAME\tQUANTITY\tPRICE\tAMOUNT\tAMOUNT AFTER DISCOUNT\n";
        for(i=0;i<c;i++)
        {
            file.open("product.txt",ios::in);
            file>>code>>name>>price>>discount;
            while (!file.eof())
            {
                if(code==a[i])
                {
                    amt=price*b[i];
                    dis=amt-(amt/100*discount);
                    total+=dis;
                    cout<<"\n\t\t\t"<<a[i]<<"\t\t"<<name<<"\t\t"<<b[i]<<"\t\t"<<price<<"\t"<<amt<<"\t\t"<<dis<<endl;
                }
                file>>code>>name>>price>>discount;
            }
            file.close();

        }
        cout<<"\n\n\t\t\t==========================================\n";
        cout<<"\t\t\t   T O T A L  A M O U N T="<<total;
    }
}
int main()
{
    bill bil;
    bil.login();
    bil.menu();
}
