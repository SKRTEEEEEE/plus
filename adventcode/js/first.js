listR = [3,4,2,1,3,3]
listL = [4,3,5,3,9,3]

const sortList = (list) => {
    let sorted;
    do {
        sorted = true;
        for (let i = 0; i < list.length - 1; i++) {
            if (list[i] > list[i + 1]) {
                let temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                sorted = false;
            }
        }
    } while (!sorted);
    return list;
};

console.log("sortedR :", sortList(listR))
console.log("sortedL :", sortList(listL))