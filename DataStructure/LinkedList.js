class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
        this.connectNext = this.connectNext.bind(this);
    }

    connectNext(nextNode) {
        this.next = nextNode;
    }
}

class LinkedList {
    constructor() {
        this.head = null;
        this.returnIterable = this.returnIterable.bind(this);
        this.createLink = this.createLink.bind(this);
    }

    createLink(data) {
        let temp = this.head;
        if (!temp) {
            this.head = new Node(data);
        } else {
            while (temp.next !== null) {
                temp = temp.next;
            }
            temp.connectNext(new Node(data));
        }

    }

    * returnIterable() {
        let temp = this.head;
        while (temp !== null) {
            yield temp.data;
            temp = temp.next;
        }
    }
}

const head = new LinkedList();
head.createLink('앙');
head.createLink('기모찌');
head.createLink('앙');
head.createLink('기분조아~');
const iterable = head.returnIterable()
console.log(iterable.next())
console.log(iterable.next())
console.log(iterable.next())
console.log(iterable.next())
