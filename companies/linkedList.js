function deleteOdd(listHead) {
    // Write your code here
    let head = listHead;
    let prev = null;

    if (head == null) {
        return null;
    }
    
    if (head.next == null) {
        if (head.data % 2 !== 0) {
            return null;
        }
    }

    while(head != null) {
        if (head.data % 2 !== 0) {
            if (prev == null) {
                listHead = head.next;
                head = head.next;
            } else {
                prev.next = head.next;
                head = head.next;
            }
            
        } else {
            prev = head;
            head = head.next;
        }
    }
    
    return listHead;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    let listHead = new SinglyLinkedList();

    const listHeadCount = parseInt(readLine().trim(), 10);

    for (let i = 0; i < listHeadCount; i++) {
        const listHeadItem = parseInt(readLine().trim(), 10);
        listHead.insertNode(listHeadItem);
    }

    const result = deleteOdd(listHead.head);

    printSinglyLinkedList(result, '\n', ws);
    ws.write('\n');

    ws.end();
}
