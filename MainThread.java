class MainThread
{
    public Static void main(String A[])
    {
        System.out.println("Inside Main Method");

        Thread tobj = Thread.currentThread();

        String name = tobj.getName();

        System.out.println("Name of current Thread:"+name);

    }
}