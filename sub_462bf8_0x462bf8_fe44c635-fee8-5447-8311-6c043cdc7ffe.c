// ============================================================
// 函数名称: sub_462bf8
// 虚拟地址: 0x462bf8
// WARP GUID: fe44c635-fee8-5447-8311-6c043cdc7ffe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_462ae0
// [被调用的父级函数]: sub_461234
// ============================================================

int32_t* __convention("regparm")sub_462bf8(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        *(*arg1 + 0x14) = 4
        (**arg1)(arg3)
    
    int32_t (__convention("regparm")** eax_3)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg3)
    *(arg1 + 0x149) = eax_3
    *eax_3 = sub_462764
    int32_t* result
    
    if (*(*(arg1 + 0x159) + 8) == 0)
        eax_3[1] = sub_4627d8
        void* edi_1 = &eax_3[2]
        int32_t* result_1 = nullptr
        void* esi_1 = arg1[0xf]
        
        while (true)
            result = result_1
            
            if (result s>= arg1[0xd])
                break
            
            (*(esi_1 + 0x1c) << 3) * *(arg1 + 0xdd)
            *(esi_1 + 8)
            *edi_1 = (*(arg1[1] + 8))(*(arg1 + 0xe1))
            edi_1 += 4
            result_1 += 1
            esi_1 += 0x54
    else
        eax_3[1] = sub_462938
        result = arg1
        sub_462ae0(result)
    
    return result
}
