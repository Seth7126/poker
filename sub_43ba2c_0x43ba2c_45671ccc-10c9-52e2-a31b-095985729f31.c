// ============================================================
// 函数名称: sub_43ba2c
// 虚拟地址: 0x43ba2c
// WARP GUID: 45671ccc-10c9-52e2-a31b-095985729f31
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b974, sub_43b964
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_43ba2c(void* arg1 @ eax, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = sub_43b964(arg1)
    
    if (result - 1 s>= 0)
        int32_t ebx_2 = result
        int32_t esi_1 = 0
        int32_t i
        
        do
            sub_43b974(arg1, esi_1)
            result = arg2()
            esi_1 += 1
            i = ebx_2
            ebx_2 -= 1
        while (i != 1)
    
    return result
}
