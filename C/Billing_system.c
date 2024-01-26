#include <stdio.h>
#include <stdlib.h>



int rice, pulses, sugar, tea, coffee, salt, oil;
int faceCream, bodyLotion, faceWash, lipstick, lipbalm, nailpolish, hairoil, perfume;
int chips, coc, pepsi, maaza, chocoBiscuit, biscuit, cupCake;
int gocTotal, cosTotal, snTotal; float total;
int r = 0, pu = 0, su = 0, t = 0, c = 0, sa = 0, o = 0;
int fc = 0, bl = 0, fw = 0, ls = 0, lb = 0, np = 0, ho = 0, p = 0;
int ch = 0, co = 0, pep = 0, ma = 0, choco = 0, bis = 0, cup = 0;
int count = 0;

void Grocery();
void Cosmatics();
void snacks();
void display();

void order()
{
    int choice, total;

    while (choice != 4)
    {
        printf("    We have following elements in our store     \n\n");
        printf("1.Grocery items\n2.Cosmatics\n3.Snacks\n");
        printf(">Press 4 to Exit\n\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Grocery();
            break;
        case 2:
            Cosmatics();
            break;
        case 3:
            snacks();
            break;
        case 4:
            printf("\nTHANK YOU TO BUY GROCERY FROM OUR STORE!!\n\n");
            break;
        default:
            printf("Invalid choice\n\n");
        }
    }

}

void Grocery()
{
    int choice;

    printf("\n................................ Grocery items ....................................... \n\n");
    printf("1.Rice: 45Rs/kg\n2.Pulses: 65Rs/kg\n3.Sugar: 80Rs/kg\n4.Tea: 100Rs/100g\n5.Coffee: 200Rs/100g\n6.Salt: 30Rs/100g\n7.Oil: 180Rs/Lit\n");
    printf("\n>Press 8 to stop buying grocery\n\n");

    while (choice != 8)
    {
        printf("\nChoose item no to buy the item:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("How many packets of Rice you want to buy(in kgs): \n");
            scanf("%d", &rice);
            r = 45 * rice;
            break;
        case 2:
            printf("How many packets of Pulse you want to buy(in kgs): \n");
            scanf("%d", &pulses);
            pu = 65 * pulses;
            break;
        case 3:
            printf("How many packets of Sugar you want to buy(in kgs): \n");
            scanf("%d", &sugar);
            su = 80 * sugar;
            break;
        case 4:
            printf("How many packets of Tea do you want to buy(in 100g): \n");
            scanf("%d", &tea);
            t = 100 * tea;
            break;
        case 5:
            printf("How many packets of Coffee do you want to buy(in 100g): \n");
            scanf("%d", &coffee);
            c = 200 * coffee;
            break;
        case 6:
            printf("How many packets of salt do you want to buy(in 100gm): \n");
            scanf("%d", &salt);
            sa = 30 * salt;
            break;
        case 7:
            printf("How many bottles of Oil do you want to buy(in Lits): \n");
            scanf("%d", &oil);
            o = 180 * oil;
            break;
        case 8:
            printf("\n\nThank you to buy grocery items from our store\n\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    }

    gocTotal = r + pu + su + t + c + sa + o;
}

void Cosmatics()
{
    int choice;

    printf("\n........................: Cosmatics items :.............................. \n\n");
    printf("1.face cream: 125Rs/pack\n2.Body lotion: 165Rs/bottle\n3.Face wash: 80Rs/tube\n4.lipstick: 150Rs/piece\n5.Lipbalm: 50Rs/piece\n6.Hair oil: 90Rs/bottle\n7.Perfume: 300Rs/bottle\n8. Nailpolish: 25Rs/bottle");
    printf("\n>Press 9 to stop buying cosmatics\n\n");
    while (choice != 9)
    {
        printf("\n\nChoose item no to buy the item: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("How many packs do you want to buy: \n");
            scanf("%d", &faceCream);
            fc = 125 * faceCream;
            break;
        case 2:
            printf("How many bottle do you want to buy: \n");
            scanf("%d", &bodyLotion);
            bl = 165 * bodyLotion;
            break;
        case 3:
            printf("How many tubes do you want to buy: \n");
            scanf("%d", &faceWash);
            fw = 80 * faceWash;
            break;
        case 4:
            printf("How many pieces do you want to buy: \n");
            scanf("%d", &lipstick);
            ls = 150 * lipstick;
            break;
        case 5:
            printf("How many pieces do you want to buy: \n");
            scanf("%d", &lipbalm);
            lb = 50 * lipbalm;
            break;
        case 6:
            printf("How many bottles do you want to buy: \n");
            scanf("%d", &hairoil);
            ho = 90 * hairoil;
            break;
        case 7:
            printf("How many bottles do you want to buy: \n");
            scanf("%d", &perfume);
            p = 300 * perfume;
            break;
        case 8:
            printf("How many bottles do you want to buy: \n");
            scanf("%d", &nailpolish);
            np = 300 * nailpolish;
            break;
        case 9:
            printf("\n\nThank you to buy cosmetics from our store\n\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    }

    cosTotal = fc + bl + ls + lb + np + ho + p;
}

void snacks()
{
    int choice;
    printf("................................:SNACKS ITEMS:..............................\n");
    printf("1.CHIPS:10Rs/packet\n2.COC:50Rs/bottle\n3.PEPSI:40Rs/bottle\n4.MAZA:30Rs/bottle\n5.CHOCOBUISCUIT:20Rs/packet\n6.BISCUIT:10Rs/packet\n7.CUPCAKE:30Rs/packet");
    printf("\n>Press 8 to stop buying snacks\n\n");
    while (choice != 8)
    {
        printf("\n\nChoose item no to buy the item: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("How many packets of CHIPS you want to buy: \n");
            scanf("%d", &chips);
            ch = 10 * chips;
            break;
        case 2:
            printf("How many bottles of COC you want to buy(in lit): \n");
            scanf("%d", &coc);
            co = 50 * coc;
            break;
        case 3:
            printf("How  many bottles of PEPSI you want to buy(in lit): \n");
            scanf("%d", &pepsi);
            pep = 40 * pepsi;
            break;
        case 4:
            printf("How  many bottles of MAAZA you want to buy(in lit): \n");
            scanf("%d", &maaza);
            ma = 30 * maaza;
            break;
        case 5:
            printf("How  many packets of CHOCOBUISCUITS you want to buy: \n");
            scanf("%d", &chocoBiscuit);
            choco = 20 * chocoBiscuit;
            break;
        case 6:
            printf("How many packets of biscuits you want to buy: \n");
            scanf("%d", &biscuit);
            bis = 10 * biscuit;
            break;
        case 7:
            printf("How many CUPCAKES you want to buy: \n");
            scanf("%d", &cupCake);
            cup = 30 * cupCake;
            break;
        case 8:
            printf("\n\nThank you to buy snacks from our store\n\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    }

    snTotal = ch + co + pep + ma + choco + bis + cup;
}

void display()
{



    printf("      ITEM              AMOUNT               PRICE\n\n");
    if (r)
        printf("      RICE               %d Packets           %dRs\n\n", rice, r);
    if (pu)
        printf("      PULSES             %d Packets           %dRs\n\n", pulses, pu);
    if (su)
        printf("      SUGAR              %d Packets           %dRs\n\n", sugar, su);
    if (t)
        printf("      TEA                %d Packets           %dRs\n\n", tea, t);
    if (c)
        printf("      COFFEE             %d Packets           %dRs\n\n", coffee, c);
    if (sa)
        printf("      SALT               %d Packets           %dRs\n\n", salt, sa);
    if (o)
        printf("      OIL                %d Bottles           %dRs\n\n", oil, o);
    if (fc)
        printf("      FACECREAM          %d Pieces            %dRs\n\n", faceCream, fc);
    if (bl)
        printf("      BODY LOTION        %d Bottles           %dRs\n\n", bodyLotion, bl);
    if (fw)
        printf("      FACE WASH          %d Tubes             %dRs\n\n", faceWash, fw);
    if (ls)
        printf("      LIPSTICK           %d Pieces            %dRs\n\n", lipstick, ls);
    if (lb)
        printf("      LIPBALM            %d Pieces            %dRs\n\n", lipbalm, lb);
    if (np)
        printf("      NAILPOLISH         %d bottles           %dRs\n\n", nailpolish, np);
    if (ho)
        printf("      HAIR OIL           %d bottles           %dRs\n\n", hairoil, ho);
    if (p)
        printf("      PERFUME            %d bottles           %dRs\n\n", perfume, p);
    if (ch)
        printf("      CHIPS              %d Packets           %dRs\n\n", chips, ch);
    if (co)
        printf("      COC                %d Bottles           %dRs\n\n", coc, co);
    if (pep)
        printf("      PEPSI              %d Bottles           %dRs\n\n", pepsi, pep);
    if (ma)
        printf("      MAAZA              %d Bottles           %dRs\n\n", maaza, ma);
    if (choco)
        printf("      CHOCOBISCUIT       %d Packets           %dRs\n\n", chocoBiscuit, choco);
    if (bis)
        printf("      BISCUIT            %d Packets           %dRs\n\n", biscuit, bis);
    if (cup)
        printf("      CUPCAKE            %d Packets           %dRs\n\n", cupCake, cup);

    total = gocTotal + cosTotal + snTotal;
    printf("\n---------------------------------------------------------------\n\n");
    printf("DISCOUNT                                        10%c",'%');
    float dis=0.1*total;
    float netTotal=total-dis;
    float cgst=0.09*netTotal,grandTotal=netTotal+2*cgst;
    printf("\n---------------------------------------------------------------\n\n");
    printf("\nSUBTOTAl                                        %.2f",total);
    printf("\nDISCOUNT  @10%c                                 %.2f",'%',dis);
    printf("\nNet Total                                       %.2f",netTotal);
    printf("\nCGST @9%c                                       %.2f",'%',cgst);
    printf("\nSGST @9%c                                       %.2f",'%',cgst);
    printf("\n-----------------------------------------------------------------\n\n");
    printf("      GRAND TOTAL                                 %.2fRs          \n\n",grandTotal);
    printf("--------------------------------------------------------------------\n\n");


    printf("\n\nThank you for shopping from our store\n\n");


}




void main()
{
    int count=0;
    int choice;
    printf("-------------------------------\n\n");
    printf("    CONVINIENT STORE    \n\n");
    printf("-------------------------------\n\n");
    while (choice != 3)
    {
        printf("1.Place Order\n2.PAYMENT\n3.Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            order();
            count++;
            break;
        case 2:
            if(count==0)
            {
                printf("\nYOU HAVE TO ORDER SOMETHING TO GET THE BILL\n");
                break;
            }
             display();

            break;
        case 3:
            printf("\n\nTHANK TO YOU TO SHOPPING FROM OUR STORE\n\nPLEASE VISIT AGAIN LATER\n\n");
            exit(0);
        default:
            printf("Wrong choice!\n");
            break;
        }
    }
}