//Back-end complete function Template for Java

class Hanoi {

    public long toh(int n, int from, int to, int aux) {
        long moves = 0L;
        if (n >= 1) {
            // recursive call to move top disk from "from" to aux in current call
            moves += toh(n - 1, from, aux, to);
            System.out.println("move disk " + n + " from rod " + from + " to rod " +
                               to);

            // increment moves
            moves++;

            // recursive call to move top disk from aux to "to" in current call
            moves += toh(n - 1, aux, to, from);
        }
        return moves;
    }
}
