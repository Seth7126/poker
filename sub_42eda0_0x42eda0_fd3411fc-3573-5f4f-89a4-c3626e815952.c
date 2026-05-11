// ============================================================
// 函数名称: sub_42eda0
// 虚拟地址: 0x42eda0
// WARP GUID: fd3411fc-3573-5f4f-89a4-c3626e815952
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, SetPropA
// [内部子函数调用]: sub_42aebc, sub_42e838, sub_42ed58, sub_42e7fc
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42eda0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x53] != 0)
    if (arg1[0x53] != 0)
        return 
    
    (*(*arg1 + 0x98))()
    SetPropA(arg1[0x53], zx.d(data_53175e), arg1)
    SetPropA(arg1[0x53], zx.d(data_53175c), arg1)
    void* esi_2 = arg1[9]
    
    if (esi_2 != 0)
        HWND hWndInsertAfter = sub_42ed58(esi_2, arg1)
        SetWindowPos(arg1[0x53], hWndInsertAfter, 0, 0, 0, 0, 0x13)
    
    void* esi_4 = sub_42e838(arg1) - 1
    
    if (esi_4 s< 0)
        return 
    
    void* i_1 = esi_4 + 1
    int32_t edi_1 = 0
    void* i
    
    do
        sub_42aebc(sub_42e7fc(arg1, edi_1))
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
}
