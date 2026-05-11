// ============================================================
// 函数名称: sub_491bad
// 虚拟地址: 0x491bad
// WARP GUID: 617d0090-9c46-5738-8cb0-2297ddb71a60
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_491bad(int32_t arg1, char arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    *0x73255f73 += arg3:1.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2
    int32_t var_4 = arg1
    var_4.b = 0
    int32_t result
    
    do
        int32_t ebx = 0
        
        do
            int32_t eax
            eax.b = var_4.b
            int32_t edx
            edx.b = ebx.b
            result = sub_4030d0(*(arg3 + eax * 0x10 + (edx << 2) + 0x1fc))
            ebx += 1
        while (ebx.b != 3)
        
        var_4.b += 1
    while (var_4.b != 9)
    
    return result
}
