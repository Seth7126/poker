// ============================================================
// 函数名称: sub_461068
// 虚拟地址: 0x461068
// WARP GUID: 45823a6c-7aa2-5400-8ca7-f729dc2ef704
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_460dc8
// ============================================================

void* __convention("regparm")sub_461068(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t* ebx = arg1 + 0x40
    
    do
        void* esi_1 = *ebx
        
        if (esi_1 != 0)
            *(esi_1 + 0x80) = arg2
        
        i += 1
        ebx = &ebx[1]
    while (i s< 4)
    
    int32_t i_1 = 0
    void* result = arg1 + 0x50
    
    do
        void* ebx_1 = *result
        
        if (ebx_1 != 0)
            *(ebx_1 + 0x111) = arg2
        
        void* ebx_2 = *(result + 0x10)
        
        if (ebx_2 != 0)
            *(ebx_2 + 0x111) = arg2
        
        i_1 += 1
        result += 4
    while (i_1 s< 4)
    
    return result
}
