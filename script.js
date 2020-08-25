function fixlen(len,parent){



    let size = (parent.width * 0.03) + (parent.height * 0.03);

    if(size >= 32){

        size = size - len/2 ;

        return size;
    }
    else{
       return size;
    }


}
