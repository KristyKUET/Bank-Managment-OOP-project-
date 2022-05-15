#include<bits/stdc++.h>
using namespace std;
/*int search(char *x,char *y)
{
    printf("%s",*x);
    int flag=0;
        //if(strcmp(sname,str)==0)
        if(*x == *y)
        {
            flag=1;
            return  flag;
        }
        else
        {
            return 0;
        }
}*/
int scmp(char s1[50], char s2[50])
{

    int flag=0,i,count=0;
    //char s1[100];
    //char s2[100];
    //scanf("%s%s",s1,s2);
    //if((strlen(s1)) == (strlen(s2)))
    //{
        for(i=0;i<strlen(s1);i++)
        {
            if(s1[i]==s2[i])
            {
                count++;
            }
        }
        if(count==strlen(s1))
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
   // }
    return flag;
}
struct dateofbirth
{
    int date;
    int month;
    int year;
}dob;
struct client_info
{
    char name[100];
    char father_name[100];
    char mother_name[100];
    char address[100];
    char phone_no[12];
    char service[100];
    int national_id;
    //int m[5];
    int balance;


}cn[100],c;
char sname[100],phone[67];
int main()
{
    FILE *fp;
    int n,i=0,j,k,s,option,a,dep,draw,transfer;
    printf("___________________________WELCOME TO Q BANK_______________________\n");
    printf("please press numbers according to your qurries\n");
    printf("1.OPEN A NEW ACCOUNT\n2.SEARCH YOUR ACCOUNT :p\n3.UPDATE INFORMATION\n4.CLOSE ACCOUNT\n5.CHECK BALANCE\n6.deposit\n7.withdraw\n8.transfer\n");
    scanf("%d",&n);
    if(n==1)
    {
        fp=fopen("client_info.txt","a");
        printf("please provide following information\n");
        printf("Name:");
        scanf("%s",c.name);
        printf("Father's Name:");
        scanf("%s",c.father_name);
        printf("Mother's Name:");
        scanf("%s",c.mother_name);
        printf("Address:");
        scanf("%s",c.address);
        printf("Phone Number:");
        scanf("%s",c.phone_no);
        printf("Service:");
        scanf("%s",c.service);
        printf("National Id:");
        scanf("%d",&c.national_id);
        printf("Initial Balance:");
        scanf("%d",&c.balance);
        //scanf("%s%s%s%s%d%s%d%d",c.name,c.father_name,c.mother_name,c.address,&c.phone_no,c.service,&c.national_id,&c.balance);
        fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d\t",c.name,c.father_name,c.mother_name,c.address,c.phone_no,c.service,c.national_id,c.balance);
        /*printf("Account Type:\n505. Saving Account\n606. Current Account \n707. FDR(fixed deposite)");
        printf("please press 505/606/707 for ur desired account");
        scanf("%d",&a);
       // a=c.m;
        switch(a)
        {
        case 505:
            fprintf(fp,"Saving Account\t");
            break;
        case 606:
            fprintf(fp,"Current Account\t");
            break;
        case 707:
            fprintf(fp,"FDR(fixed deposite)\t");
            break;
        }*/
        fprintf(fp,"\n");
        fclose(fp);
        cn[i]=c;
        i++;
        s=i;
    }
    else if(n==2)
    {
         fp = fopen("client_info.txt","r");
         printf("press '33' in u want search by name\n");
         printf("press '44' in u want phone number\n");
         scanf("%d",&option);
         if(option == 33)
         {
            s=0;
            printf("enter name for searching");
            scanf("%s",sname);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1 )
        {

        if(strcmp(sname,cn[s].name)==0)
        {
           printf("%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,cn[s].national_id,cn[s].balance);

        }
        s++;
        }
        fclose(fp);
         }

        else
        {
            fp = fopen("client_info.txt","r");
            s=0;
            printf("enter phone number for searching");
            scanf("%s",phone);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1 )
        {

        if(strcmp(phone,cn[s].phone_no)==0)
        {
           printf("%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,cn[s].national_id,cn[s].balance);

        }
        s++;
        }
        fclose(fp);
        }
        }

    else if(n==3)
    {

            fp = fopen("client_info.txt","r");
            s=0;
            printf("enter your name: ");
            scanf("%s",sname);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1)
            {
                if(strcmp(sname,cn[s].name) == 0)
                {
                    printf("Enter your new name, phone_number, address: ");
                    scanf("%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance);
                }
            s++;
            }
            fclose(fp);

            fp = fopen("client_info.txt","w");
            for(int k=0;k<s;k++)
            {
                fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d",cn[k].name,cn[k].father_name,cn[k].mother_name,cn[k].address,cn[k].phone_no,cn[k].service,cn[k].national_id,cn[k].balance);
                fprintf(fp,"\n");
            }
            fclose(fp);
        }
        else if(n==4)
        {
            fp = fopen("client_info.txt","r");
            s=0;
            printf("enter your name: ");
            scanf("%s",sname);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1)
            {
                if(strcmp(sname,cn[s].name) == 0)
                {

                    for(k=s;k<i;k++)
                    {
                        cn[k]=cn[k+1];

                    }
                }
                s++;
            }
            fclose(fp);
            fp = fopen("client_info.txt","w");
            for(s=0;s<(i-1);s++)
            {
                fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,cn[s].national_id,cn[s].balance);
                fprintf(fp, "\n");
            }
            fclose(fp);
        }
        else if(n==5)
        {
           fp = fopen("client_info.txt","r");
            s=0;
            printf("enter name ");
            scanf("%s",sname);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1 )
        {

        if(strcmp(sname,cn[s].name)==0)
        {
          printf("%d",cn[s].balance);
        }
        s++;
        }
        fclose(fp);
        }
        else if(n==6)
        {
            fp = fopen("client_info.txt","r");
            s=0;
            printf("enter name ");
            scanf("%s",sname);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1 )
        {

            if(strcmp(sname,cn[s].name)==0)
            {
                printf("how much money you want to deposite:");
                scanf("%d",&dep);
                if(dep>0 && dep<=20000)
                {
                    cn[s].balance = cn[s].balance + dep;
                    printf("%d",cn[s].balance);

                }
            else if(dep>20000)
            {
                printf("cant deposit that much ammount at a time");
            }
            else
            {
                printf("invalid deposit ammount");
            }
            }
            s++;
        }
        fclose(fp);
        }
        else if(n==7)
        {
            fp = fopen("client_info.txt","r");
            s=0;
            printf("enter name ");
            scanf("%s",sname);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1 )
        {

        if(strcmp(sname,cn[s].name)==0)
        {
          printf("how much many do you want to withdraw?");
        scanf("%d",&draw);
        if(draw<=cn[s].balance && draw<=20000)
        {
            cn[s].balance-=draw;
            printf("%d",cn[s].balance);
        }
        else
            {
                printf("you dont have sufficent ammount");
            }
        }
        s++;
        }
        fclose(fp);

        }
        else if(n==8)
        {
           fp = fopen("client_info.txt","r");
            s=0;
            printf("enter name ");
            scanf("%s",sname);
            while(fscanf(fp,"%s%s%s%s%s%s%d%d",cn[s].name,cn[s].father_name,cn[s].mother_name,cn[s].address,cn[s].phone_no,cn[s].service,&cn[s].national_id,&cn[s].balance) > -1 )
        {

        if(strcmp(sname,cn[s].name)==0)
        {
           printf("how much money do u want to transfer");
           scanf("%d",&transfer);
        if(cn[s].balance > transfer)
        {
            cn[s].balance -=transfer;
            printf("%d",cn[s].balance);
        }
        else
        {
            printf("cant transfer");
        }
        }
        s++;
        }
        fclose(fp);
        }




    return 0;
}
