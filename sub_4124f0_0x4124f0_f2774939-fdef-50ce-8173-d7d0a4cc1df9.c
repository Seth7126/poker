// ============================================================
// 函数名称: sub_4124f0
// 虚拟地址: 0x4124f0
// WARP GUID: f2774939-fdef-50ce-8173-d7d0a4cc1df9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408aa0
// [被调用的父级函数]: 无
// ============================================================

uint32_t* __convention("regparm")sub_4124f0(void* arg1, void* arg2, uint32_t* arg3)
{
    // 第一条实际指令: char var_14 = 0
    char var_14 = 0
    uint32_t esi = 0
    int32_t edi_1 = *(arg1 + 0x10) - 1
    
    if (edi_1 s>= 0)
        do
            uint32_t ebx_2 = (edi_1 + esi) u>> 1
            int32_t eax_2 = sub_408aa0(*(*(arg1 + 0xc) + (ebx_2 << 3)), arg2)
            
            if (eax_2 s>= 0)
                edi_1 = ebx_2 - 1
                
                if (eax_2 == 0)
                    var_14 = 1
                    
                    if (*(arg1 + 0x19) != 1)
                        esi = ebx_2
            else
                esi = ebx_2 + 1
        while (edi_1 s>= esi)
    
    *arg3 = esi
    uint32_t* result
    result.b = var_14
    return result
}
