// ============================================================
// 函数名称: sub_412ca4
// 虚拟地址: 0x412ca4
// WARP GUID: cb0e495a-5401-5538-8cd2-fc103c593cfe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40b56c, sub_4077e0, sub_4077c4, sub_4077b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412ca4(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*arg2 s> 0)
    if (*arg2 s> 0)
        *arg2 = (*arg2 + 0x1fff) & 0xffffe000
    
    int32_t result_3 = *(arg1 + 4)
    int32_t result = result_3
    int32_t ebx = *(arg1 + 0x10)
    
    if (*arg2 != ebx)
        if (*arg2 == 0)
            sub_4077e0(result_3)
            return 0
        
        int32_t edx_1
        
        if (ebx != 0)
            int32_t result_2
            result_2, edx_1 = sub_4077c4(result_3, *arg2, zx.d(*data_530820))
            result = result_2
        else
            int32_t result_1
            result_1, edx_1 = sub_4077b4(zx.d(*data_530820), *arg2)
            result = result_1
        
        if (result == 0)
            edx_1.b = 1
            sub_40b56c(sub_40e6c4-0x14, edx_1, data_530944)
            sub_403828()
            noreturn
    
    return result
}
