// ============================================================
// 函数名称: sub_4959c0
// 虚拟地址: 0x4959c0
// WARP GUID: 69103c39-a917-56ae-9495-63cc223c177d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: inet_addr, htons
// [内部子函数调用]: sub_403828, sub_495930, sub_49598c, sub_40423c, sub_40b56c
// [被调用的父级函数]: sub_495b60, sub_495a58
// ============================================================

int32_t __fastcallsub_4959c0(int32_t arg1, int32_t arg2, int16_t* arg3, char arg4, int16_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    *arg3 = 2
    int32_t eax
    
    if (arg2 != 0)
        eax, arg1 = sub_495930(arg1, arg2)
        *(arg3 + 4) = eax
    else if (arg1 == 0)
        if (arg4 != 0)
            arg2.b = 1
            sub_40b56c(0x4940dc, arg2, data_52febc)
            sub_403828()
            noreturn
        
        *(arg3 + 4) = 0
    else
        eax, arg1 = inet_addr(sub_40423c(arg1))
        *(arg3 + 4) = eax
    
    int16_t result
    
    if (arg6 == 0)
        eax.w = arg5
        result = htons(eax)
        arg3[1] = result
    else
        result = htons(sub_49598c(arg1, arg6))
        arg3[1] = result
    
    return result
}
