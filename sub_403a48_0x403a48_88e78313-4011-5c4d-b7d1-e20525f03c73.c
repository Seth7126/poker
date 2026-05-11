// ============================================================
// 函数名称: sub_403a48
// 虚拟地址: 0x403a48
// WARP GUID: 88e78313-4011-5c4d-b7d1-e20525f03c73
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403c20
// ============================================================

int32_t*sub_403a48()
{
    // 第一条实际指令: int32_t* eax = data_5314a8
    int32_t* eax = data_5314a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* i = fsbase->NtTib.ExceptionList
    
    if (eax == i)
        int32_t eax_1 = *eax
        fsbase->NtTib.ExceptionList = eax_1
        return eax_1
    
    for (; i != 0xffffffff; i = i->Next)
        if (i->Next == eax)
            eax = *eax
            i->Next = eax
            break
    
    return eax
}
