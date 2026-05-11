// ============================================================
// 函数名称: sub_456030
// 虚拟地址: 0x456030
// WARP GUID: aeba5116-2a7c-5128-9805-55279ec8d1da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_455fc0
// [被调用的父级函数]: sub_456060
// ============================================================

void __convention("regparm")sub_456030(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    void* ebx = arg2
    void** esi = edi[5]
    
    if (ebx s<= 0)
        return 
    
    while (true)
        arg1 = esi[1]
        
        if (ebx s<= arg1)
            break
        
        ebx -= arg1
        sub_455fc0(edi)
    
    *esi += ebx
    esi[1] -= ebx
}
