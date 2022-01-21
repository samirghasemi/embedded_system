/*a*/
for(i=0;i<N;i++){
    z[i]=a[i]+b[i];
    w[i]=a[i]-b[i];
}

/*b*/
for(i=0;i<N;i++){
    x[i]=c[i]*d[i];
}
for(i=0;i<N;i++){
    y[i]=x[i]*e[i];
}


/*c*/
for(i=0;i<N;i++){
    for(j=0;j<M;j++){
        c[i][j]=a[i][j]+b[i][j];
        x[j]=x[j]*c[i][j];
        }
    }
for (k=0;k<N;k++){
y[k]=a[0][k]+x[M]
}