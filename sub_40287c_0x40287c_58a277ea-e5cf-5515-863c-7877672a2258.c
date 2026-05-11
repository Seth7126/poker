// ============================================================
// 函数名称: sub_40287c
// 虚拟地址: 0x40287c
// WARP GUID: 58a277ea-e5cf-5515-863c-7877672a2258
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_52452c, sub_4d7b54, sub_47b5b8, sub_47a5fc, sub_4d6668, sub_47c160, sub_50dbd4, sub_47a2ac, sub_484e24, sub_47a46c, sub_4d951f, sub_51300c, sub_4d9378, sub_5293a8, sub_46d9ac, sub_50f7b8, sub_477368, sub_488509, sub_524d14, sub_4d954c, sub_46d99f, sub_50928c, sub_483128
// ============================================================

int32_t __fastcallsub_40287c(int32_t arg1, int32_t arg2, char* arg3 @ eax, char* arg4)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = *arg3
    
    if (result.b == 0)
        *arg4 = result.b
    else
        if (arg2 s<= 0)
            arg2 = 1
        label_402894:
            result = result - arg2 + 1
            
            if (arg1 s< 0)
                arg1 = 0
            else if (arg1 s> result)
                arg1 = result
        else
            if (arg2 s<= result)
                goto label_402894
            
            arg1 = 0
        
        *arg4 = arg1.b
        __builtin_memcpy(&arg4[1], &arg3[arg2], arg1)
    
    return result
}
