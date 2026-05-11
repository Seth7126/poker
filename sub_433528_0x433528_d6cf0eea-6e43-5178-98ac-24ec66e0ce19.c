// ============================================================
// 函数名称: sub_433528
// 虚拟地址: 0x433528
// WARP GUID: d6cf0eea-6e43-5178-98ac-24ec66e0ce19
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433480, sub_4336a8, sub_433384, sub_433370
// [被调用的父级函数]: sub_4337f8, sub_433ecc, sub_433d44
// ============================================================

void* __convention("regparm")sub_433528(void* arg1)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    arg1.b = *(edi + 0x10)
    char temp2 = arg1.b
    arg1.b -= 1
    int32_t esi_1
    
    if (temp2 == 1)
        esi_1 = sub_433480(edi, 1)
    label_433559:
        void* ebx_1 = *(edi + 8)
        int32_t temp0_1 = divs.dp.d(sx.q(esi_1), sub_433370(edi))
        *(ebx_1 + 0x20) = sub_433384(ebx_1) + temp0_1
        arg1 = sub_4336a8(ebx_1)
        
        for (void* i = *(ebx_1 + 0xc); i != 0; i = *(i + 0xc))
            *(i + 0x20) = *(*(i + 0x18) + 0x20) + temp0_1
            
            if (*(i + 0xc) == 0)
                *(i + 0x20) += mods.dp.d(sx.q(esi_1), temp0_1)
            
            arg1 = sub_4336a8(i)
    else
        char temp3_1 = arg1.b
        arg1.b -= 1
        
        if (temp3_1 == 1)
            esi_1 = sub_433480(edi, 2)
            goto label_433559
    return arg1
}
