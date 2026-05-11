// ============================================================
// 函数名称: sub_4769d8
// 虚拟地址: 0x4769d8
// WARP GUID: dcb05d04-62d6-5570-90f9-f6f6c33b9a50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetAsyncKeyState
// [内部子函数调用]: sub_403008, sub_40fa94, sub_475990
// [被调用的父级函数]: sub_47d208
// ============================================================

void __convention("regparm")sub_4769d8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t* ebx = arg1
    
    if (*(arg2 + 4) == 0x100)
        int32_t eax = *(arg2 + 8)
        
        if (eax u> 0xffff)
            sub_403008()
            noreturn
        
        int16_t var_a = eax.w
        char var_b_1 = 0
        
        if (GetAsyncKeyState(0x10) != 0)
            int16_t eax_1
            eax_1.b = 1
            eax_1.b = 1 | var_b_1
            var_b_1 = eax_1.b
        
        ebx[0x4d0].b = 0
        void var_14
        sub_40fa94(0xfffffff8, zx.d(var_a), &var_14)
        void* ecx_1
        ecx_1.b = 0x38
        ebx[0x75]
        ebx[0x74](ebx + 0xa96, &var_14)
        
        if (ebx[0x4d0].b == 0)
            arg1.b = var_b_1
            int32_t* var_20_2 = arg1
            int32_t var_8
            arg1, ebp_1 = sub_475990(ebx, var_8, &var_a)
    
    if (*(arg2 + 4) == 0x101 && ebx[0x26c].b != 0)
        *(ebx + 0x9b1) = 0
    
    *ebp_1
}
