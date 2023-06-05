  list<int>::iterator i;
    for (i = table[index].begin();
    i != table[index].end(); i++)
    {
    if (*i == key)
        break;
    }

    if (i != table[index].end())
    table[index].erase(i);
