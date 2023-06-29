import java.util.*

fun main() {
    val n = readln().toInt()
    val input = readln().split(" ")
    val q: PriorityQueue<Int> = PriorityQueue<Int>(Collections.reverseOrder())
    var res = 0

    for (i in input) {
        q.add(i.toInt())
    }

    while (q.size > 0) {
        if (q.size == 1) {
            res++
            break
        }

        val a = q.poll()!!
        val b = q.poll()!!
        res += b * 2

        if (a > b) {
            q.add(a - b)
        }
    }
    print(res)
}
