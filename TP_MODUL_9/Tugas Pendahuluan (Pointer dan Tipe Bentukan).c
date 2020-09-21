#include<stdio.h>
//cara1
typedef struct{
    char* name;
    int price;
    int cooldown;
    int mana_required;
}Item;
//cara2
struct Hero{
    int strength;
    int agility;
    int intellegence;
    Item slot1,slot2,slot3;
};

void make_hero(struct Hero *X, int str, int agi, int itg){
    //assign nilai atribut ke hero
    X->strength = str;
    X->agility = agi;
    X->intellegence = itg;
    }

void hero_type(struct Hero X){
    //cetak tipe hero (strength/agility/intellegence), attribute dengan nilai tertinggi merupakan tipe hero tersebut.
    //misalkan Pudge(25,14,14), maka tipenya Strength
       printf("HERO BERTYPE = ");
        if((X.strength > X.agility) && (X.strength > X.intellegence)){
           printf("STR");
        } else if ((X.agility > X.intellegence) && ( X.agility > X.strength)){
           printf("AGI");
        } else {
            printf("ITG");
        }
}
void hero_info(struct Hero X){
    //cetak atribut, tipe, dan item pada hero
   printf("strenght = %d \n",X.strength);
   printf("agility = %d \n",X.agility);
   printf("intellegence = %d \n",X.intellegence);
   hero_type(X);
   printf("\n");
   printf("slot 1 = %s\n",X.slot1.name );
   printf("slot 2 = %s\n",X.slot2.name);
   printf("slot 3 = %s\n",X.slot3.name);
   printf("\n");
}

void item_init(Item *I,char* name, int hrga, int cooldown, int manarequired ){
    //isi keterangan item seperti name, price, cooldown, dan mana_required
    Item kamu;
    kamu.name = name;
    kamu.price = hrga;
    kamu.cooldown = cooldown;
    kamu.mana_required = manarequired;

    *I = kamu;

}
void buying_item(struct Hero *Y, Item item1, Item item2, Item item3){
    //pasangkan hero dengan item, assign item ke slot hero.
    struct Hero p;

    Y->slot1 = item1;
    Y->slot2 = item2;
    Y->slot3 = item3;

}
struct Hero richest_hero(struct Hero X[], int N){
    //BONUS
    //tentukan hero dengan total harga item termahal

}


int main(){

    struct Hero
        Skywrath_Mage,
        Necrophos,
        Viper,
        Outworld_Devourer,
        Pudge;

    Item item[5];

    item_init(&item[0],"Rod_of_Atos",3100,16,50);
    item_init(&item[1],"Dagon",7200,15,180);
    item_init(&item[2],"Divine_Rapier",6200,0,0);
    item_init(&item[3],"Scythe_of_Vyse",5700,25,100);
    item_init(&item[4],"Aghanim_Scepter",4200,0,0);


    make_hero(&Skywrath_Mage,19,13,27);
    make_hero(&Necrophos,16,15,22);
    make_hero(&Viper,20,21,15);
    make_hero(&Outworld_Devourer,19,24,26);
    make_hero(&Pudge,25,14,14);

    buying_item(&Skywrath_Mage,item[0],item[3],item[4]);
    buying_item(&Necrophos,item[1],item[3],item[4]);
    buying_item(&Viper,item[1],item[2],item[4]);
    buying_item(&Outworld_Devourer,item[0],item[2],item[3]);
    buying_item(&Pudge,item[4],item[3],item[1]);

    printf("Skywrath Mage's Attribute:\n");
    hero_info(Skywrath_Mage);
    printf("Necrophos' Attribute:\n");
    hero_info(Necrophos);
    printf("Viper's Attribute:\n");
    hero_info(Viper);
    printf("Outworld_Devourer's Attribute:\n");
    hero_info(Outworld_Devourer);
    printf("Pudge's Attribute:\n");
    hero_info(Pudge);

}
