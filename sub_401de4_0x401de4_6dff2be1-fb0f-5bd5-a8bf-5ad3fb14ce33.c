// ============================================================
// 函数名称: sub_401de4
// 虚拟地址: 0x401de4
// WARP GUID: 6dff2be1-fb0f-5bd5-a8bf-5ad3fb14ce33
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401c64
// [被调用的父级函数]: sub_401f88
// ============================================================

int32_t __convention("regparm")sub_401de4(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t result = 0
    int32_t eax = *ebx
    
    if ((eax & 0x80000000) != 0)
        int32_t result_1 = eax & 0x7ffffffc
        result = result_1
        ebx += result_1
        eax = *ebx
    
    if ((eax.b & 2) == 0)
        sub_401c64(ebx)
        int32_t eax_2 = ebx[2]
        result += eax_2
        void* ebx_1 = ebx + eax_2
        *ebx_1 &= 0xfffffffe
    
    return result
}
