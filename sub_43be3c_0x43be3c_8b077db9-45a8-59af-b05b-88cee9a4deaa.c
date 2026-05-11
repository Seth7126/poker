// ============================================================
// 函数名称: sub_43be3c
// 虚拟地址: 0x43be3c
// WARP GUID: 8b077db9-45a8-59af-b05b-88cee9a4deaa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b974, sub_43b964
// [被调用的父级函数]: sub_43cd94, sub_43ce2c
// ============================================================

int32_t __convention("regparm")sub_43be3c(void* arg1)
{
    // 第一条实际指令: int32_t result = sub_43b964(arg1)
    int32_t result = sub_43b964(arg1)
    
    if (result - 1 s>= 0)
        int32_t ebx_2 = result
        int32_t esi_1 = 0
        int32_t i
        
        do
            result = (*(*sub_43b974(arg1, esi_1) + 0x3c))()
            esi_1 += 1
            i = ebx_2
            ebx_2 -= 1
        while (i != 1)
    
    return result
}
