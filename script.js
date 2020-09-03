let text = "Состояние: "

function fixlen(len,parent){



    let size = (parent.width) / (parent.height) * 20; // font size

        size = size - len/4;

        return size;

}


