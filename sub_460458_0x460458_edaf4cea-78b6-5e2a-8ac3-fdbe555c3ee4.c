// ============================================================
// 函数名称: sub_460458
// 虚拟地址: 0x460458
// WARP GUID: edaf4cea-78b6-5e2a-8ac3-fdbe555c3ee4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460314
// [被调用的父级函数]: sub_4604f0
// ============================================================

int32_t __fastcallsub_460458(int32_t* arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg3[4] != 0x64)
        void* eax = *arg3
        *(eax + 0x14) = 0x12
        *(eax + 0x18) = arg3[4]
        (**arg3)()
    
    if (arg3[arg2 + 0x10] == 0)
        arg3[arg2 + 0x10] = sub_460314(arg3)
    
    int32_t i = 0
    int32_t* ebx_1 = arg1
    
    do
        int32_t eax_8 = divs.dp.d(sx.q(*ebx_1 * arg5 + 0x32), 0x64)
        
        if (eax_8 s<= 0)
            eax_8 = 1
        
        if (eax_8 s> 0x7fff)
            eax_8 = 0x7fff
        
        if (arg4 != 0 && eax_8 s> 0xff)
            eax_8 = 0xff
        
        ebx_1 = &ebx_1[1]
        *(arg3[arg2 + 0x10] + (i << 1)) = eax_8.w
        i += 1
    while (i s< 0x40)
    
    *(arg3[arg2 + 0x10] + 0x80) = 0
    return 0
}
