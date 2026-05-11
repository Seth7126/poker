// ============================================================
// 函数名称: sub_431c90
// 虚拟地址: 0x431c90
// WARP GUID: 6c688458-4a52-58fb-97c6-81962044e11a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_410524, sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_431c90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    void* result = *(arg1 + 0x16c)
    
    if (result != 0)
        int32_t esi_2 = *(result + 8) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            var_14 = 0
            int32_t i
            
            do
                int32_t* eax_1 = sub_410524(*(arg1 + 0x16c), var_14)
                sub_4103c8(arg2, eax_1)
                int32_t* ebx_1
                ebx_1.w = 0xffb8
                result = sub_4032ac(eax_1, arg2)
                var_14 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
