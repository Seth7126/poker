// ============================================================
// 函数名称: sub_517c04
// 虚拟地址: 0x517c04
// WARP GUID: f5b9607c-5253-577c-81e8-cdb34b0c4924
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ee958
// ============================================================

int32_t __convention("regparm")sub_517c04(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_328
    void var_328
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_328, arg1, 0x318)
    *edi = *esi_1
    int32_t result = 0
    int16_t i_2
    int32_t i_1 = sx.d(i_2)
    
    if (i_1 s> 0)
        int32_t result_1 = 1
        void* eax = &var_328
        int32_t i
        
        do
            if (arg2 == sx.d(*eax))
                result = result_1
            
            result_1 += 1
            eax += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
