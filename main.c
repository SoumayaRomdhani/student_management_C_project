
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int alphabetique(char *ch){
    int test=0, i, n;
    n = strlen(ch);
    i=-1;
    do{
        i++;
        if((ch[i]!=' ') && (ch[i]<'A' || ch[i]>'Z')){
            test=1;
        }
    }while((test != 1) && (i<n-2));
    return test;
}
int numerique(char *ch){
    int t=0,i,n;
    i=-1;
    n=strlen(ch);
    do{
        i++;
        if(ch[i]<'0' || ch[i]>'9'){
            t=1;
        }
    }while((t!=1)&&(i<n-2));
    return t;
}


int sommeTableau(int tableau[], int tailTableau)
{
    int i=0 , somme=0;
    for (i=0 ; i<tailTableau ; i++)
    {
    somme=somme+tableau[i];
    }
    return somme;
}
int LETTRE(char*ch1 ,char ch2){
    int test=0;
    if(ch1[0]==ch2){
        test=1;}
        return test;
}
int OCC(char*ch1 ,char*ch2){
    int test=0;
    if(ch1[0]==ch2[0]){
        test=1;}
        return test;
}
char premier(char*ch1){
    char pre;
    pre=ch1[0];
    return pre;
}
int unique(char ch[9],char m[100][9],int n){
     int i=0 , test=1;
     while((i<n) && (test==1)){
       if(strcmp(m[i],ch)==0){
        test=0;
       }
       i++;
     }
     return test;}



int main()
{
    int GRP[100]={1,2,3,1,2,2,1,3,1,2,1,3,1,2,3,2,1,1,3,3,3},ABS[100]={7,6,3,8,17,0,0,3,4,3,20,11,8,0,0,15,16,4,2,3};
    int i,j,n=20,x,s1,s2,s3,s4,s5,s6,s7,m1,m2,occ;
    int nb1,nb2,nb3,nb4,nb5,rank1=0,rank2=0,rank3=0,rank4=0,rank5=0,rank6=0,rank7=0,v;
    int x1,x2,x3,x4;
    int choix,choice,t,choix2,choix3;
    int m,specialite,modi,supp,test;

    float nPROJET[100]={14.5,17.50,14.75,16.25,17.00,8.5,11.25,13.75,9.75,18.75,17.00,14.25,16.25,17.00,19.00,11.00,14.00,15.00,16.25,10.00};
    float nASSID[100]={19.00,20.00,13.00,16.00,11.5,14.25,11.25,10.00,13.25,7.25,16.75,18.75,17.00,11.5,16.75,11.25,16.5,19.75,11.00,16.00};
    float nEXDS[100]={14.25,15.25,14.25,16.25,11.75,9.00,14.5,12.25,18.00,17.5,15.5,12.5,11.75,11.00,18.5,9.5,3.00,4.5,10.00,12.5,11.75};
    float MOY[100],rang1[100];
    float moyenne,b1,b2,d1,d2,moy1,moy2,c;
    float taux,ab=0,max=0;

    char num[9],ncin1[9],ncin2[9],lettre,a,b,spec1[9],spec2[9],num2[9],nom[10],w1,w2,w3,w4,w5,w6,w7;
    char NOM[100][15]={{"AMAL"},{"AZIZ"},{"AHLEM"},{"ADEM"},{"MARIEM"},{"HIBA"},{"MALEK"},{"ROUA"},{"ONS"},{"IYED"},{"SAWSEN"},{"AMIN"},{"SAMI"},{"SALIMA"},{"HAYFA"},{"HAROUN"},{"IMEN"},{"OUSSEMA"},{"DALEL"},{"OLFA"}};
    char PRENOM[100][15]={{"MAKNI"},{"ALOUI"},{"ABIDI"},{"MARWENI"},{"DHIEFI"},{"TLILI"},{"OUNI"},{"YAZIDI"},{"REZGI"},{"DHOUIB"},{"LAFI"},{"TWATI"},{"ALIMI"},{"KTATA"},{"MANSOUR"},{"MOHSNI"},{"JERBI"},{"RIAHI"},{"kalii"},{"ABED"}};
    char CIN[100][9]={"00251269","15987536","36951475","94631687","00269851","30216984","00149526","90253614","03129548","00326845","12365478","77774589","85236549","0003694","10123784","37537539","38330201","03030169","79643012","03697458"};
    char SPECIALITE[100][15]={"LNIG-BI","LNIG-BIS","LNIG-BI","LNIG-BI","LNIG-BIS","LNIG-BIS","LNIG-BI","LNIG-BI","LNIG-BIS","LNIG-BI","LNIG-BIS","LNIG-BI","LNIG-BIS","LNIG-BIS","LNIG-BI","LNIG-BIS","LNIG-BIS","LNIG-BI","LNIG-BI","LNIG-BI"};
        printf("_____________________________________________\n");
        printf("____________________________________________\n");
        printf("================BIENVENUE================\n");
        printf("_____________________________________________\n");
        printf("______________________________________________\n\n");
        printf("la liste des etudiants est la suivante \n");
        printf("\n");


        for (i=0;i<=n-1;i++){
                        printf("%d )  ",i+1);
                        printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");
                        }
        do{
        printf("\n");
        printf("=========MENU=========\n");
        printf("1-ajouter un etudiant\n2-supprimer un etudiant\n3-modifier un etudiant\n4-Chercher un etudiant\n5-analyse de la partie 1\n6-analyse de la partie 2\n ");
    do{
        printf("\n---entrez votre choix--- \n");
        scanf("%d",&choix);
    }while((1>choix)||(choix>6));

    switch(choix){



    case 1:

        printf("pour ajouter un etudiants il faut ajouter ses coordonnees\n");
        n=n+1;

        do{
        printf("\n entrer le nom de l'etudiant \n ");
        scanf("%s",NOM[n-1]);
        }while(alphabetique(NOM[n-1])==1);


        do{
        printf("\n entrer le prenom de l'etudiant a ajouter\n ");
        scanf("%s",PRENOM[n-1]);
        }while(alphabetique(PRENOM[n-1])==1);

        do{
        printf("\n donner le numero de CIN de l'etudiant a ajouter\n ");
        scanf("%s",&ncin1);
        }while((numerique(ncin1)==1)||(strlen(ncin1)!=8)||(unique(ncin1,CIN,n)==0));
        strcpy(CIN[n-1],ncin1);

        do {
            printf("\n donner la specialite de l'etudiant a ajouter  \n 1-LNIG-BI \n 2-LNIG-BIS  \n");
            scanf("%d",&v);}while((v<1)||(v>2));
            switch(v){


        case 1:
            strcpy(SPECIALITE[n-1],"LNIG-BI");
            break;


        case 2 :
            strcpy(SPECIALITE[n-1],"LNIG-BIS");}

         do{
            printf("\n donner le nombre d'absence de l'etudiant a ajouter \n");
            scanf("%d",&ABS[n-1]);
            }while((ABS[n-1]<0)||(ABS[n-1]>20));


               if (strcmp(SPECIALITE[n-1],"LNIG-BIS")==0){
               do{
                printf("\n donner le groupe de l'etudiant a ajouter(1 ou 2)\n");
                scanf("%d",&GRP[n-1]);
               }while((GRP[n-1]<0)||(GRP[n-1]>2));}
               else {
                printf("donner le groupe de l'etudiant a ajouter(1 ou 2 ou 3 )\n");
                scanf("%d",&GRP[n-1]);
               }while((GRP[n-1]<0)||(GRP[n-1]>3));

                for (i=0;i<=n-1;i++){
                        printf("%d)  ",i+1);
                        printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");
                        }
        printf("\n");
                        break;



    case 2:

        /*suppression d'un etudiant*/
          do{
        printf("\n pour supprimer un etudiant il faut entrer le numero de sa CIN \n");
        scanf("%s",num);
        }while((numerique(num)==1)||(strlen(num)!=8)||(unique(num,CIN,n)==1));

        for (i=0;i<=n;i++){
            if(strcmp(CIN[i],num)==0){
                for(j=i;j<n-1;j++){
                ABS[j]=ABS[j+1];
                GRP[j]=GRP[j+1];
                strcpy(NOM[j],NOM[j+1]);
                strcpy(PRENOM[j],PRENOM[j+1]);
                strcpy(CIN[j],CIN[j+1]);
                strcpy(SPECIALITE[j],SPECIALITE[j+1]);}}}
        n--;

        printf("\n la liste des etudiants apres la suppression\n");
        for (i=0;i<=n-1;i++){
                        printf("%d)  ",i+1);
                        printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");
                        }
            break;




    case 3 :
        do{
         do{
        printf("\n pour modifier un etudiant il faut entrer le numero de sa CIN (il faut qu'il soit deja existant)\n");
        scanf("%s",num);
        }while((numerique(num)==1)||(strlen(num)!=8)||unique(num,CIN,n)==1);

        for (i=0;i<=n;i++){
            if(strcmp(CIN[i],num)==0){
                    do{
    printf("\n quel donnee voulez vous modifier ? \n1-nom \n2-prenom \n3-cin \n4-specialite \n5-groupe \n6-nombre d'absence\n\nTAPEZ VOTRE CHOIX SVP\n");
    scanf("%d",&x);}
                    while((1>x)||(x>6));
            switch(x){

    case 1 :
        do{
        printf("\n donner le nouveau nom \n");
        scanf("%s",&NOM[i]);
        }while(alphabetique(NOM[i])==1);
        break;



    case 2:
        do{
            printf("\n donner le nouveau prenom \n");
            scanf("%s",&PRENOM[i]);
        }while(alphabetique(PRENOM[i])==1);
        break;



    case 3 :
         do{
        printf("\n donner le numero de CIN de l'etudiant a ajouter\n ");
        scanf("%s",&ncin2);
        }while((numerique(ncin2)==1)||(strlen(ncin2)!=8)||(unique(ncin2,CIN,n)==0));
        strcpy(CIN[i],ncin2);
        break;



    case 4 :
        do {
            printf("\n donner la nouvelle specialite\n \n 1)LNIG-BI \n 2)LNIG-BIS\n");
            scanf("%d",&modi);
        }while((modi<1)||(modi>2));

        switch(modi){
        case 1:
        strcpy(SPECIALITE[i],"LNIG-BI");
        break;
        case 2:
            strcpy(SPECIALITE[i],"LNIG-BIS");
        break;
        }
    break;




    case 5 :
        if (strcmp(SPECIALITE[i],"LNIG-BIS")==0){
               do{
                printf("\n donner le groupe de l'etudiant a modidfier(1 ou 2)\n");
                scanf("%d",&GRP[i]);
               }while((GRP[i]<0)||(GRP[i]>2));}
               else {
                printf("donner le groupe de l'etudiant a modifier(1 ou 2 ou 3 )\n");
                scanf("%d",&GRP[i]);
               }while((GRP[i]<0)||(GRP[i]>3));
               break;

    case 6:
         do{
            printf("\n donner le nombre d'absence de l'etudiant a modifier \n");
            scanf("%d",&ABS[i]);
            }while((ABS[i]<0)||(ABS[i]>20));
            break;

            }}}
             do{
             printf("\n voulez vous modifier un autre etudiant ? \n 1)Oui \n 2)Nom\n");
             scanf("%d",&x3);
             }while((x3<1)||(x3>2));
             }while(x3!=2);

                        printf("\n===============================================================\n");
                        printf("\nla liste des etudiants apres la modification est la suivante\n");
                        for (i=0;i<=n-1;i++){
                        printf("%d)  ",i+1);
                        printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");
                        }

            break;

       case 4:
           printf("\n=======RECHERCHE D UN ETUDIANT========\n");
           do{
           printf("=====MENU======\n1)chercher un etudiant selon son numero de CIN\n2)recherche d un etudiant selon son nom\n3)recherche un etudiant selon sa specialite \n");
           scanf("%d",&choix2);
           }while((choix2<1)||(choix2>3));
           switch(choix2){
       case 1:

           do{

        printf("\nTAPEZ LE NUMERO DE CIN DE L ETUDIANT A CHERCHER \n");
        scanf("%s",num2);

        }while((numerique(num2)==1)&&(strlen(num2)==8)||(unique(num2,CIN,n)==1));

        for(i=0;i<=n-1;i++){
                if(strcmp(num2,CIN[i])==0){
                    printf("les cordonnees de l etudiant a chercher sont \n ");
                     printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");}}
        break;

       case 2:
          do{
        printf("\nTAPEZ LE NOM DE L ETUDIANT A CHERCHER \n");
        scanf("%s",nom);
        }while(alphabetique(nom)==1);
        for(i=0;i<=n-1;i++){
                if(strcmp(nom,NOM[i])==0){
                        printf("\n\t\t===============================\n");
                        printf("les cordonnees de l etudiant cherche sont \n ");
                        printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");}}
        break;




       case 3:

          do{
        printf("\TAPEZ LA SPECIALITE DE L ETUDIANT A CHERCHER\n 1)LNIG-BI \n2)LNIG-BIS \n");
        scanf("%d",specialite);
        }while((specialite<1)||(specialite>2));

        switch(specialite){
        case 1:
        for(i=0;i<=n-1;i++){

                   if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                     printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");}}
                        break;

        case 2:
              for(i=0;i<=n-1;i++){
                   if(strcmp(SPECIALITE[i],"LNIG-BIS")==0){
                     printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");}}
                        break;}

        break;}
        break;


       case 5:

           do{
           do{
                printf("\n1)afficher les etudiants de 3eme BI et 3eme BIS\n2)afficher le nombre des etudiants selon groupe et specialite\n3)affichage du groupe qui contient le plus d etudiants dans la specialite qui contient le moins d etudiants\n4)calcule du taux d absenteisme\n5)affichage des etudiants elimines et les plus assidus \n6)manipulation des noms selon les lettres\n7)les etudiants qui n ont jamais assiste \n\nTAPEZ VOTRE CHOIX SVP\n-->");
                scanf("%d",&choix3);
           }while((choix3<1)||(choix3>7));

           switch(choix3){

             case 1:
           /*affichage des deux listes des etudiants de BI et de BIS selon specialite*/

           printf("\n============== la liste des etudiants de 3 eme LNIG-BIS=============\n");
           for(i=0;i<n;i++){
            if(strcmp(SPECIALITE[i],"LNIG-BIS")==0){
                    printf(" \n%s %s\n",NOM[i] ,PRENOM[i]);
            }}

           printf("\n ===============la liste des etudiants de 3 eme LNIG-BI============\n");
           for(i=0;i<n;i++){
            if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                    printf(" \n%s %s\n",NOM[i] ,PRENOM[i]);
            }}
            break;

            case 2:

            s1=0;
            s2=0;
            s3=0;
            s4=0;
            s5=0;
            s6=0;
            s7=0;
            printf("\n----le nombre des etudiants dans la specialite BIS----\n");
            for(i=0;i<n;i++){
                    if(strcmp(SPECIALITE[i],"LNIG-BIS")==0){
                       ++s1;}}
                       printf("%d",s1);
            printf("\n---le nombre des etudiants dans la specialite BI----\n ");
            for(i=0;i<n;i++){
                    if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                       ++s2;}}
                       printf("%d",s2);

            /*affichage du nombre des etudiants selon le groupe*/

            printf("\n---le nombre des etudiants dans le groupe 1 da la specialite BIS---\n");
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==1)){
                       ++s3;}}
                       printf("%d",s3);
            printf("\n---le nombre des etudiants dans le groupe 2 da la specialite BIS---\n");
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==2)){
                       ++s4;}}
                       printf("%d",s4);
            printf("\n---le nombre des etudiants dans le groupe 1 da la specialite BI---\n");
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==1)){
                       ++s5;}}
                       printf("%d",s5);
            printf("\n---le nombre des etudiants dans le groupe 2 da la specialite BI---\n");
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==2)){
                       ++s6;}}
            printf("%d",s6);printf("\n---le nombre des etudiants dans le groupe 3 da la specialite BI---\n");
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==3)){
                       ++s7;}}
                       printf("%d",s7);

            break;

            case 3:

            /*affichage du groupe qui contient le plus d’étudiants dans la spécialité qui contient le moins d’étudiants */

            if(s1<s2){
                    if((s5>s6)&&(s5>s7)){printf("\n\n=======le groupe '1' contient le plus d etudiants dans la specialite 'BI' qui contient le moins d etudiants=======\n ");}
                    else{
                        if((s6>s5)||(s6>s7)){printf("\n\n=======le groupe '2' contient le plus d etudiants dans la specialite 'BI' qui contient le moins d etudiants=======\n ");}
                        else{printf("\n\n=======le groupe '1' contient le plus d etudiants dans la specialite 'BI' qui contient le moins d etudiants=====\n ");}}}
            else{
                if(s3>s4){printf("\n\n=======le groupe '1' contient le plus d etudiants dans la specialite 'BIS' qui contient le moins d etudiants=======\n ");}
                else{printf("\n\n=======le groupe '2' contient le plus d etudiants dans la specialite 'BIS' qui contient le moins d etudiants=======\n ");}}
              break;

            case 4:



           /*calcul du taux d'absenteisme*/

             ab=sommeTableau(ABS,n);
             taux=((ab/(20*n))*100);
             printf("\n===le taux d absenteisme des etudiants des 3eme annees LNIG-BI et LNIG-BIS=%.2f===\n",taux);
              break;




              case 5:

             /*Affichage de la liste des étudiants qui sont éliminés*/
             printf("\n\n=======la liste des etudiants eliminees est========\n");
             for(i=0;i<=n-1;i++){
                if((ABS[i]>6)||(ABS[i]==6)){
                    printf("\n%s %s\n",NOM[i],PRENOM[i]);}}



            /*Affichage de la liste des étudiants les plus assidus*/

            printf("\n\n======la liste des etudiants assidus=======\n");
             for(i=0;i<=n-1;i++){
                if(ABS[i]==0){
                    printf("\n%s %s\n",NOM[i],PRENOM[i]);}}

            break;

            case 6:

            /*affichage de la liste des étudiants dont le nom commence par une lettre donnée */
             do{
             printf("\n\n -----> saisissez une lettre pour afficher la liste des etudiants dont le nom commence par cette lettre<------\n");
             fflush(stdin);
             scanf("%c",&lettre);
             test=0;
             }while(('A'>lettre)||('Z'<lettre));

             for(i=0;i<=n-1;i++){
                if(LETTRE(NOM[i],lettre)==1){
                    test=1;
                    printf("\n %s %s\n",NOM[i],PRENOM[i]);}}
                if (test==0){
                    printf(" aucun nom commence par la lettre '%c%'\n\n",lettre);
                }


            /*Pour chaque spécialité, et pour chaque groupe, on va afficher la lettre représentant le plus grand nombre d’étudiants dont le nom commence par cette lettre*/

              printf("\n~~~~~~la lettre representant le plus grand nombre d etudiants dont le nom commence par elle dans la specialite 'BIS' est: ");
              m=0;
              for(i=0;i<=n-1;i++){
                occ=0;
                if(strcmp(SPECIALITE[i],"LNIG-BIS")==0){
                for(j=0;j<=n-1;j++){
                if (( OCC(NOM[i],NOM[j])==1)&& (strcmp(SPECIALITE[j],"LNIG-BIS")==0)){
                    occ=occ+1;}
                    }} if(occ>m){
                    m=occ;
                    w1=premier(NOM[i]);}
              }printf("%c\n",w1);


               printf("\n~~~~~~~la lettre representant le plus grand nombre d etudiants dont le nom commence par elle dans la specialite 'BI' est:  ");
               m=0;
               for(i=0;i<=n-1;i++){
                occ=0;
                if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                for(j=0;j<=n-1;j++){
                if (( OCC(NOM[i],NOM[j])==1)&& (strcmp(SPECIALITE[j],"LNIG-BI")==0)){
                    occ=occ+1;}
                    }} if(occ>m){
                    m=occ;
                    w2=premier(NOM[i]);}
              }printf("%c\n",w2);

                  printf("\n~~~~~~~la lettre representant le plus grand nombre d etudiants dont le nom commence par elle dans la specialite 'BI'(groupe 1) est:  ");
               m=0;
               for(i=0;i<=n-1;i++){
                occ=0;
                if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==1)){
                for(j=0;j<=n-1;j++){
                if ((( OCC(NOM[i],NOM[j])==1)&& (strcmp(SPECIALITE[j],"LNIG-BI")==0))&&(GRP[j]==1)){
                    occ=occ+1;}
                    }} if(occ>m){
                    m=occ;
                    w3=premier(NOM[i]);}
              }printf("%c\n",w3);



               printf("\n~~~~~~~la lettre representant le plus grand nombre d etudiants dont le nom commence par elle dans la specialite 'BI'(groupe 2) est:  ");
               m=0;
               for(i=0;i<=n-1;i++){
                occ=0;
                if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==2)){
                for(j=0;j<=n-1;j++){
                if ((( OCC(NOM[i],NOM[j])==1)&& (strcmp(SPECIALITE[j],"LNIG-BI")==0))&&(GRP[j]==2)){
                    occ=occ+1;}
                    }} if(occ>m){
                    m=occ;
                    w4=premier(NOM[i]);}
              }printf("%c\n",w4);



               printf("\n~~~~~~~la lettre representant le plus grand nombre d etudiants dont le nom commence par elle dans la specialite 'BI'(groupe 3) est:  ");
               m=0;
               for(i=0;i<=n-1;i++){
                occ=0;
                if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==3)){
                for(j=0;j<=n-1;j++){
                if ((( OCC(NOM[i],NOM[j])==1)&& (strcmp(SPECIALITE[j],"LNIG-BI")==0))&&(GRP[j]==3)){
                    occ=occ+1;}
                    }} if(occ>m){
                    m=occ;
                    w5=premier(NOM[i]);}
              }printf("%c\n",w5);


               printf("\n~~~~~~~la lettre representant le plus grand nombre d eudiants dont le nom commence par elle dans la specialite 'BIS'(groupe 1) est:  ");
               m=0;
               for(i=0;i<=n-1;i++){
                occ=0;
                if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==1)){
                for(j=0;j<=n-1;j++){
                if ((( OCC(NOM[i],NOM[j])==1)&& (strcmp(SPECIALITE[j],"LNIG-BIS")==0))&&(GRP[j]==1)){
                    occ=occ+1;}
                    }} if(occ>m){
                    m=occ;
                    w6=premier(NOM[i]);}
              }printf("%c\n",w6);

               printf("\n~~~~~~~la lettre representant le plus grand nombre d etudiants dont le nom commence par elle dans la specialite 'BIS'(groupe 2) est:  ");
               m=0;
               for(i=0;i<=n-1;i++){
                occ=0;
                if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==2)){
                for(j=0;j<=n-1;j++){
                if ((( OCC(NOM[i],NOM[j])==1)&& (strcmp(SPECIALITE[j],"LNIG-BIS")==0))&&(GRP[j]==2)){
                    occ=occ+1;}
                    }} if(occ>m){
                    m=occ;
                    w7=premier(NOM[i]);}
              }printf("%c\n",w7);


               break;

            case 7:

                /*affichage des etudiants qui n'ont jamais assisté*/
                for(i=0;i<=n-1;i++){
                    if(ABS[i]==20){
                        printf("%s %s\n",NOM[i],PRENOM[i]);}}
                do{
                    printf("voulez vous les etudiants qui n'ont jamais assiste?\n1)OUI\n2)NOM\n");
                    scanf("%d",&supp);
                }while((supp<1)||(supp>2));
                switch(supp){

              case 1:

             /* suppression des etudiants qui n’ont jamais assisté*/
             for(i=0;i<=n-1;i++){
             if(ABS[i]==20)
                {ABS[i]=ABS[i+1];
                GRP[i]=GRP[i+1];
                strcpy(NOM[i],NOM[i+1]);
                strcpy(PRENOM[i],PRENOM[i+1]);
                strcpy(CIN[i],CIN[i+1]);
                strcpy(SPECIALITE[i],SPECIALITE[i+1]);
                n--;}}
                printf("liste des etudiants appres la suppression de ceux qui n ont jamais assiste\n\n");
                 for (i=0;i<=n-1;i++){
                        printf("%d)  ",i+1);
                        printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");
                        }
            break ;

              case 2:

                printf("les etudiants qui n ont jamais assiste sont encore sauvegardes \n\n");
            break;}}

            do{
            printf("\n=====\nvoulez vous revenir au menu de l analyse de la partie 1?\n1)OUI 2)NOM\n");
            scanf("%d",&x4);
            }while((x4<1)||(x4>2));
            }while(x4!=2);


           break;




       case 6:
        printf("\n=========STATISTIQUES DE LA MATIERE ASD================\n");




                /*affichage des tableaux des notes*/

                printf("\n____________Les notes des etudiants _________\n");
                printf("\nnom      prenonm\t");
                printf("assiduite\t");
                printf("projet\n");
                for(i=0;i<n;i++){
                    printf("\n%s\t",NOM[i]);
                    printf("%s\t",PRENOM[i]);
                    printf("\t%.2f\t\t",nASSID[i]);
                    printf("%.2f\t",nPROJET[i]);
                    printf("\t%.2f\t",nEXDS[i]);
                    if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                    printf("(EXAMEN)");}
                    else{
                    printf("(DS)");}}



                    /*le menu*/
                    do{
                    printf("\n\n             ==============           \n-------MENU--------\n");
                    do{
                    printf("1-Moifier une note \n2-supprimer un etudiant \n3-calcul des moyennes \n4-Statisiques detaillee ds resultats de la matiere ASD \n\n TAPEZ VOTRE CHOIX\n--->");
                    scanf("%d",&choice);
                    }while((choice<1)||(choice>4));

                    switch(choice){



                    case 1 :

          do{
          printf("\n pour modifier une note d'un etudiant il faut entrer le numero de sa CIN (il faut qu'il soit deja existant)\n");
          scanf("%s",num);
          }while((numerique(num)==1)||(strlen(num)!=8)||(unique(num,CIN,n)==1));
          for(i=0;i<=n-1;i++){
          if((strcmp(CIN[i],num)==0)&&(strcmp(SPECIALITE[i],"LNIG-BI")==0)){
          do{
          printf("Quelle note voulez vous modifier ?\n1-Note de l assiduite \n2-Note du projet \n3-Note de l'examen  \nTAPEZ VOTRE CHOIX\n--->");
          scanf("%d",&t);
          }while((t<1)||(t>3));
          switch(t){
          case 1:
            for(i=0;i<=n-1;i++){
                if(strcmp(CIN[i],num)==0){
                    do{
                    printf("\ndonez la nouvelle note de l assiduite \n-->");
                    scanf("%f",&nASSID[i]);
                    }while((nASSID[i]<0)||(nASSID[i]>20));}}
            break;



          case 2:
             for(i=0;i<=n-1;i++){
                if(strcmp(CIN[i],num)==0){
                    do{
                    printf("\ndonez la nouvelle note du projet\n--> ");
                    scanf("%f",&nPROJET[i]);
                    }while((nPROJET[i]<0)||(nPROJET[i]>20));}}
            break;



          case 3:
               for(i=0;i<=n-1;i++){
                if(strcmp(CIN[i],num)==0){
                    do{
                    printf("\ndonez la nouvelle note de l examen \n-->");
                    scanf("%f",&nEXDS[i]);
                    }while((nEXDS[i]<0)||(nEXDS[i]>20));}}
           break;}
          }
          if((strcmp(CIN[i],num)==0)&&(strcmp(SPECIALITE[i],"LNIG-BIS")==0)){
          do{printf("Quelle note voulez vous modifier ?\n1-Note de l assiduite \n2-Note du projet \n3-Note du DS \nTAPEZ VOTRE CHOIX\n--->");
          scanf("%d",&t);
          }while((t<1)||(t>3));
           switch(t){
          case 1:
            for(i=0;i<=n-1;i++){
                if(strcmp(CIN[i],num)==0){
                    do{
                    printf("\ndonez la nouvelle note de l assiduite\n-->");
                    scanf("%f",&nASSID[i]);
                    }while((nASSID[i]<0)||(nASSID[i]>20));}}
            break;



          case 2:
             for(i=0;i<=n-1;i++){
                if(strcmp(CIN[i],num)==0){
                    do{
                    printf("\ndonez la nouvelle note du projet\n--> ");
                    scanf("%f",&nPROJET[i]);
                    }while((nPROJET[i]<0)||(nPROJET[i]>20));}}
            break;




          case 3:
              for(i=0;i<=n-1;i++){
                if(strcmp(CIN[i],num)==0){
                    do{
                    printf("\ndonez la nouvelle note du DS \n-->");
                    scanf("%f",&nEXDS[i]);
                    }while((nEXDS[i]<0)||(nEXDS[i]>20));}}



           break;}}}
           break;



          case 2:
            do{
        printf("\n pour supprimer un etudiant il faut entrer le numero de sa CIN \n");
        scanf("%s",num);
        }while((numerique(num)==1)||(strlen(num)!=8)||(unique(num,CIN,n)==1));

        printf("\n____________La liste des etudiants apres suppression_________\n");
        for (i=0;i<=n;i++){
            if(strcmp(CIN[i],num)==0){
                for(j=i;j<n-1;j++){
                ABS[j]=ABS[j+1];
                GRP[j]=GRP[j+1];
                strcpy(NOM[j],NOM[j+1]);
                strcpy(PRENOM[j],PRENOM[j+1]);
                strcpy(CIN[j],CIN[j+1]);
                strcpy(SPECIALITE[j],SPECIALITE[j+1]);
                nASSID[j]=nASSID[j+1];
                nPROJET[j]=nPROJET[j];
                nEXDS[j]=nEXDS[j+1];}}}
        n--;



        for (i=0;i<=n-1;i++){
                        printf("%d)  ",i+1);
                        printf("nom: %s   ||",NOM[i]);
                        printf("prenom: %s  ||",PRENOM[i]);
                        printf("numero de cin: %s  || \n",CIN[i]);
                        printf("le groupe: %d  ||",GRP[i]);
                        printf("la specialite: %s  ||",SPECIALITE[i]);
                        printf("le nombre d'absence: %d  ||",ABS[i]);
                        printf("\n--------------------------\n");
                        }
          printf("\n____________Les notes des etudiants apres suppression_________\n");
                printf("\nnom      prenonm\t");
                printf("assiduite\t");
                printf("projet\n");
                for(i=0;i<n;i++){
                    printf("\n%s\t",NOM[i]);
                    printf("%s\t",PRENOM[i]);
                    printf("\t%.2f\t\t",nASSID[i]);
                    printf("%.2f\t",nPROJET[i]);
                    printf("\t%.2f\t",nEXDS[i]);
                    if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                    printf("(EXAMEN)");}
                    else{
                    printf("(DS)");}}
            break;



          case 3:

          for(i=0;i<=n-1;i++){
            if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                moyenne=(((nASSID[i]/100)*10)+((nPROJET[i]/100)*20)+((nEXDS[i]/100)*70));
                MOY[i]=moyenne;}
                else{
                moyenne=(((nASSID[i]/100)*20)+((nPROJET[i]/100)*40)+((nEXDS[i]/100)*40));
                MOY[i]=moyenne;}}

                printf("\n------la liste des moyennes de la matiere ASD--------\n");
                printf("\nNom  Prenom");
                printf("\t\t Moyenne\n");
         for(i=0;i<=n-1;i++){
                printf("\n%s  %s\t\t",NOM[i],PRENOM[i]);
                printf("%.2f\n",MOY[i]);}

            break;




        case 4:

          s1=0;
            s2=0;
            s3=0;
            s4=0;
            s5=0;
            s6=0;
            s7=0;
            for(i=0;i<n;i++){
                    if(strcmp(SPECIALITE[i],"LNIG-BIS")==0){
                       ++s1;}}

            for(i=0;i<n;i++){
                    if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                       ++s2;}}


            /* du nombre des etudiants selon le groupe*/
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==1)){
                       ++s3;}}
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==2)){
                       ++s4;}}
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==1)){
                       ++s5;}}
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==2)){
                       ++s6;}}
            for(i=0;i<n;i++){
                    if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==3)){
                       ++s7;}}

            /*moyenne*/
             for(i=0;i<=n-1;i++){
            if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                moyenne=(((nASSID[i]/100)*10)+((nPROJET[i]/100)*20)+((nEXDS[i]/100)*70));
                MOY[i]=moyenne;}
                else{
                moyenne=(((nASSID[i]/100)*20)+((nPROJET[i]/100)*40)+((nEXDS[i]/100)*40));
                MOY[i]=moyenne;}}



          /*les étudiants ayant la meilleure note de projet toutes spécialités confondues*/
            printf("\n la meilleure note en projet est ");
            for ( i=0 ; i<= n-1; i++){
          if(nPROJET[i]>max){
                         max=nPROJET[i];}}
            printf("%.2f \n ",max);
            printf("l etudiant(s) ayant cette note est (sont):");
            for(i=0;i<=n-1;i++){
            if(nPROJET[i]==max){
        printf("\n %s %s\n",NOM[i],PRENOM[i]);}}
        max=0;

        /* l’(es) étudiant(s) ayant la meilleure moyenne toutes spécialités confondues*/

            printf("\n la meilleure moyenne est ");

            for ( i=0 ; i<= n-1; i++){
          if(MOY[i]>max){
                         max=MOY[i];}}
            printf("%.2f \n ",max);
             printf("l etudiant(s) ayant cette note est (sont):");
            for(i=0;i<=n-1;i++){
            if(MOY[i]==max){
        printf("\n %s %s\n",NOM[i],PRENOM[i]);}}

       /* Pour chaque spécialité, afficher la liste des étudiants qui n’ont pas la moyenne dans ASD*/

       for(i=0;i<=n-1;i++){
            if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                moyenne=(((nASSID[i]/100)*10)+((nPROJET[i]/100)*20)+((nEXDS[i]/100)*70));
                MOY[i]=moyenne;}
                else{
                moyenne=(((nASSID[i]/100)*20)+((nPROJET[i]/100)*40)+((nEXDS[i]/100)*40));
                MOY[i]=moyenne;}}

       printf(" \n=====la liste des etudiants qui n ont pas la moyenne dans l ASD pour la specialite 'BI' =====\n\n");
       for(i=0;i<=n-1;i++){
        if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
            if(MOY[i]<10){
                printf("\n%s %s",NOM[i],PRENOM[i]);}}}
      printf(" \n=====la liste des etudiants qui n ont pas la moyenne dans l ASD pour la specialite 'BIS' =====\n\n");
       for(i=0;i<=n-1;i++){
        if(strcmp(SPECIALITE[i],"LNIG-BIS")==0){
            if(MOY[i]<10){
                printf("\n%s %s",NOM[i],PRENOM[i]);}}}
        nb1=0;
        nb2=0;
        nb3=0;
        nb4=0;
        nb5=0;
        printf("\n======la liste des etudiants 'BI'(GROUPE 1) qui ont valide la matiere ASD=======\n\n");
        for(i=0;i<=n-1;i++){
            if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==1)){
                if((MOY[i]>10)||(MOY[i]==10)){
                ++nb1;
                printf("\n%s %s\n",NOM[i],PRENOM[i]);}}}
        printf("\n======la liste des etudiants 'BI'(GROUPE 2) qui ont valide la matiere ASD=======\n\n");
        for(i=0;i<=n-1;i++){
            if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==2)){
                if((MOY[i]>10)||(MOY[i]==10)){
                ++nb2;
                printf("\n%s %s\n",NOM[i],PRENOM[i]);}}}
        printf("\n======la liste des etudiants 'BI'(GROUPE 3) qui ont valide la matiere ASD=======\n\n");
        for(i=0;i<=n-1;i++){
            if((strcmp(SPECIALITE[i],"LNIG-BI")==0)&&(GRP[i]==3)){
                if((MOY[i]>10)||(MOY[i]==10)){
                ++nb3;
                printf("\n%s %s\n",NOM[i],PRENOM[i]);}}}
        printf("\n======la liste des etudiants 'BIS'(GROUPE 1) qui ont valide la matiere ASD=======\n\n");
        for(i=0;i<=n-1;i++){
            if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==1)){
                if((MOY[i]>10)||(MOY[i]==10)){
                ++nb4;
                printf("\n%s %s\n",NOM[i],PRENOM[i]);}}}
         printf("\n======la liste des etudiants 'BIS'(GROUPE 2) qui ont valide la matiere ASD=======\n\n");
        for(i=0;i<=n-1;i++){
            if((strcmp(SPECIALITE[i],"LNIG-BIS")==0)&&(GRP[i]==2)){
                if((MOY[i]>10)||(MOY[i]==10)){
                ++nb5;
                printf("\n%s %s\n",NOM[i],PRENOM[i]);}}}

        /*le groupe qui contient le moins d’étudiants ayant eu la moyenne pour la matière ASD*/
        c=nb1;
        if(c<nb2){c=nb2;}
        if(c<nb3){c=nb3;}
        if(c<nb4){c=nb4;}
        if(c<nb5){c=nb5;}

        if(nb1==c){printf("\n==le groupe qui contient le moins d’etudiants ayant eu la moyenne pour la matiere ASD est le groupe 1 de la secialite BI==\n");}
        if(nb2==c){printf("\n==le groupe qui contient le moins d’etudiants ayant eu la moyenne pour la matiere ASD est le groupe 2 de la secialite BI==\n");}
        if(nb3==c){printf("\n==le groupe qui contient le moins d’etudiants ayant eu la moyenne pour la matiere ASD est le groupe 3 de la secialite BI==\n");}
        if(nb4==c){printf("\n==le groupe qui contient le moins d’etudiants ayant eu la moyenne pour la matiere ASD est le groupe 1 de la secialite BIS==\n");}
        if(nb5==c){printf("\n==le groupe qui contient le moins d’etudiants ayant eu la moyenne pour la matiere ASD est le groupe 2 de la secialite BIS==\n");}

        /* Quelle est la spécialité qui a la meilleure moyenne générale en projet */

        d1=0;
        d2=0;
        for(i=0;i<=n-1;i++){
                if(strcmp(SPECIALITE[i],"LNIG-BI")){
                  d1=d1+nPROJET[i];
                }else{
                d2=d2+nPROJET[i];}}
        moy1=d1/s2;
        moy2=d2/s1;
        if(moy1>moy2){
            printf(" \n\n====la specialite qui a la meilleure moyenne generale en projet est :'BI'==\n\n");
        }else{
             printf("\n\n====la specialite qui a la meilleure moyenne generale en projet est :'BIS'====\n\n");}





          /*le rang par specialite et par groupe*/

             for(i=0;i<=n-1;i++){
            if(strcmp(SPECIALITE[i],"LNIG-BI")==0){
                moyenne=(((nASSID[i]/100)*10)+((nPROJET[i]/100)*20)+((nEXDS[i]/100)*70));
                MOY[i]=moyenne;}
                else{
                moyenne=(((nASSID[i]/100)*20)+((nPROJET[i]/100)*40)+((nEXDS[i]/100)*40));
                MOY[i]=moyenne;}}






         for(i=0;i<=n-1;i++){
         rang1[i]=MOY[i];}

         for(j=1;j<=n;j++)
         for(i=0;i<n-1;i++)
         if (( rang1[i] < rang1[i+1] )||(rang1[i]==rang1[i+1])){
                c = rang1[i];
                rang1[i] = rang1[i+1];
                rang1[i+1] = c;}



        printf("\n====\n le rang de chaque etdiant de BI\n ");
         for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){
            if((strcmp(SPECIALITE[j],"LNIG-BI")==0)&&(MOY[j]==rang1[i])){
                rank1=rank1+1;
                printf("%s \t %d \n",NOM[j],rank1);}}}


                printf("\n====\n le rang de chaque etdiant de BIS\n ");
          for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){
            if((strcmp(SPECIALITE[j],"LNIG-BIS")==0)&&(MOY[j]==rang1[i])){
                rank2=rank2+1;
                printf("%s \t %d \n",NOM[j],rank2);}}}


            printf("\n===\n le rang de chaque etdiant de BIS (grp 1)\n ");
           for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){
            if(((strcmp(SPECIALITE[j],"LNIG-BIS")==0)&&(MOY[j]==rang1[i]))&&(GRP[j]==1)){
                rank3=rank3+1;
                printf("%s \t %d \n",NOM[j],rank3);}}}



                printf("\n===\n  le rang de chaque etdiant de BIS (grp 2)\n");
              for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){
            if(((strcmp(SPECIALITE[j],"LNIG-BIS")==0)&&(MOY[j]==rang1[i]))&&(GRP[j]==2)){
                rank4=rank4+1;
                printf("%s \t %d \n",NOM[j],rank4);}}}



                printf("\n===\n le rang de chaque etdiant de BI (grp 1)\n ");
                for(i=0;i<=n-1;i++){
             for(j=0;j<=n-1;j++){
            if(((strcmp(SPECIALITE[j],"LNIG-BI")==0)&&(MOY[j]==rang1[i]))&&(GRP[j]==1)){
                rank5=rank5+1;
                printf("%s \t %d \n",NOM[j],rank5);}}}



                printf("\n===\n le rang de chaque etdiant de BI (grp 2)\n ");
                 for(i=0;i<=n-1;i++){
             for(j=0;j<=n-1;j++){
            if(((strcmp(SPECIALITE[j],"LNIG-BI")==0)&&(MOY[j]==rang1[i]))&&(GRP[j]==2)){
                rank6=rank6+1;
                printf("%s \t %d \n",NOM[j],rank6);}}}



                printf("\n===\n le rang de chaque etdiant de BI (grp 3)\n");
               for(i=0;i<=n-1;i++){
             for(j=0;j<=n-1;j++){
            if(((strcmp(SPECIALITE[j],"LNIG-BI")==0)&&(MOY[j]==rang1[i]))&&(GRP[j]==3)){
                rank7=rank7+1;
                printf("%s \t %d \n",NOM[j],rank7);}}}

        break;}

      do{ printf("\n voulez vous revenir au menu des statistiques de l ASD ? \n 1)Oui \n 2)Nom\n");
   scanf("%d",&x2);}while((x2<1)||(x2>2));
   }while(x2!=2);

     break;}


   do{
   printf("\n voulez vous revenir au menu principal ? \n 1)Oui \n 2)Nom\n");
   scanf("%d",&x1);
   }while((x1<1)||(x1>2));

   }while(x1!=2);


    printf("====================AU REVOIR===========================\n");



    return 0;}


