// ============================================================
// 函数名称: sub_51a7f4
// 虚拟地址: 0x51a7f4
// WARP GUID: 68306c1c-0a98-536c-a8d6-684be055cafa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4939e0, sub_493ab4, sub_51a454
// [被调用的父级函数]: sub_51a68f, sub_51b5c0
// ============================================================

void __convention("regparm")sub_51a7f4(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (*(ebx + 0x97a) != 0 || *(ebx + 0x97b) != 0 || *(ebx + 0x96c) s<= 0)
        return 
    
    int32_t eax_1 = sub_493ab4(*(ebx + 4))
    int32_t edi
    
    if (eax_1 s>= sub_4939e0(*(ebx + 4)))
        sub_51a454(ebx, eax_1, edi)
}
