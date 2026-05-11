// ============================================================
// 函数名称: sub_403308
// 虚拟地址: 0x403308
// WARP GUID: 22d7a6c1-f06e-5a65-b81b-4bd7fda301f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40327c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_403308(int32_t* arg1, int16_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.w = *arg2
    ebx.w = ebx.w
    
    if (ebx.w != 0 && ebx.w u< 0xc000)
        sub_40327c(*arg1)
        
        if (ebx.w != 0xc000)
            jump(ebx)
    
    jump(*(*arg1 + 0xfffffff0))
}
