listR = [3,4,2,1,3,3]
listL = [4,3,5,3,9,3]

const sortList = (list) => {
    for(i=0;i<list.length;i++){
        let temp;
        if(list[i] > list[i++]){
            temp = list[i]
            list[i] = list[i++];
            list[i++] = temp;
        }
        return list;
    }
}

console.log("sortedR :", sortList(listR))
console.log("sortedL :", sortList(listL))