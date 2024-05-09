#include<stdio.h>

int main()
{
    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprites;
    int coke;
    int mojitos;
    int thumbs_up;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("--------------\n");
    printf("BILLING SYSTEM\n");
    printf("--------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%s", &name );
    printf("Customer Name : ");
    scanf("%d", &phone_number );
    printf("Customer_ID : ");
    scanf("%d", &customer_id );

    printf("-------------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap (RS 10) : ");
    scanf("%d", &body_soap );
    printf("Hair Cream (RS 25) : ");
    scanf("%d", &hair_cream );
    printf("Hair Spray (RS 50) : ");
    scanf("%d", &hair_spray );

    printf("-------------------------\n");

    printf("GROCERRIES\n\n");

    printf("Sugar (Rs 100) : ");
    scanf("%d", &sugar );
    printf("Tea (RS 15) : ");
    scanf("%d", &tea );
    printf("Coffee (Rs 50) : ");
    scanf("%d", &coffee );
    printf("Rice (RS 150) : ");
    scanf("%d", &rice );
    printf("Wheat (Rs 160) : ");
    scanf("%d", &wheat );

    printf("---------------------\n");

    printf("BEVERAGES\n\n");

    printf("Pepsi (Rs 30) : ");
    scanf("%d", &pepsi );
    printf("Sprite (Rs 35) : ");
    scanf("%d", &sprites );
    printf("Coke (Rs 30) : ");
    scanf("%d", &coke );
    printf("Mojitos (Rs 25) : ");
    scanf("%d", &mojitos );
    printf("Thumbs Up (Rs 35) : ");
    scanf("%d", &thumbs_up );

    printf("-------------------------\n");

    int boso;
    int hc;
    int hs;
    int bosp;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    cosmetics_total = boso + hc + hs + bosp ;

    printf("--------------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;


    s = 100 * sugar;
    t = 15 * tea;
    c = 50 * coffee;
    r = 150 * rice;
    w = 160 * wheat;
    grocery_total = s + t + c + r + w ; 

    printf("Sugar : ");
    printf("%d Rs\n", s );
    printf(" Tea : ");
    printf("%d Rs\n", t );
    printf("Coffee : ");
    printf("%d Rs\n", c );
    printf("Rice : ");
    printf("%d Rs\n", r );
    printf("Wheat : ");
    printf("%d Rs\n", w);
    printf("Total Grocery Price : ");
    printf("%d Rs\n", grocery_total);


    printf("--------------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep = 30 * pepsi;
    spr = 35 * sprites;
    cok = 30 * coke;
    moj = 25 * mojitos;
    thu = 35 * thumbs_up;
    beverage_total = pep + spr + cok + moj + thu;

    printf("Pepsi : ");
    printf("%d Rs\n", pep );
    printf("Sprite : ");
    printf("%d Rs\n", spr );
    printf("Coke : ");
    printf("%d Rs\n", cok );
    printf("Mojitos : ");
    printf("%d Rs\n", moj );
    printf("Thumbs UP : ");
    printf("%d Rs\n", thu);
    printf("Total Beverages Price : ");
    printf("%d Rs\n", beverage_total);


    printf("---------------------------\n");
    total = cosmetics_total + grocery_total + beverage_total;

    printf("Total Amount : ");
    printf("%d Rs\n ", total);

    printf("---------------------\n");

    printf("------------------------------------------\n");

    printf("NTU Super Market\n\n ");


    printf(" Customer Name : ");
    printf("%s\n", name );
    printf("Customer phone number : ");
    printf("%d\n", phone_number);
    printf("customer ID : ");
    printf("%d\n", customer_id );

    printf("Product Name                       Quantity                       Price\n\n");
    printf("Body Soap                           %d                             %d\n", body_soap,boso);
    printf("Hair Cream                          %d                             %d\n", hair_cream,hc);
    printf("Body Spray                          %d                             %d\n", body_spray,bosp);
    printf("Hair Spray                          %d                             %d\n", hair_spray,hs);
    printf("Sugar                               %d                             %d\n", sugar,s);
    printf("Tea                                 %d                             %d\n", tea,t);
    printf("Coffee                              %d                             %d\n", coffee,c);
    printf("Rice                                %d                             %d\n", rice,r);
    printf("Wheat                               %d                             %d\n", wheat,w);
    printf("Pepsi                               %d                             %d\n", pepsi,pep);
    printf("Sprite                              %d                             %d\n", sprites,spr);
    printf("Coke                                %d                             %d\n", coke,cok);
    printf("Mojitos                             %d                             %d\n", mojitos,moj);
    printf("Thumbs up                           %d                             %d\n", thumbs_up,thu);


    printf("Grocery Total Price : %d\n\n", grocery_total);

    printf("Cosmetics Total Price : %d\n\n", cosmetics_total);

    printf("Beverage Total Price : %d\n\n", beverage_total);

    printf("Total Price : %d\n\n", total);

    printf("------------------------------------------\n");

    return 0;


}






    















