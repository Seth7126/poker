// ============================================================
// 函数名称: sub_42b3f4
// 虚拟地址: 0x42b3f4
// WARP GUID: 7c95ecce-bbb6-5f6c-addb-a8d7e9cce242
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_418b8c, sub_418b70
// [被调用的父级函数]: sub_431468
// ============================================================

int32_t* __convention("regparm")sub_42b3f4(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t nNumerator = arg2
    int32_t nNumerator = arg2
    int32_t* esi = arg1
    
    if (nNumerator != arg3)
        int32_t ebx
        
        if ((esi[8].b & 1) == 0)
            ebx.b = 0x1f
        else
            ebx.b = esi[0x22].b
        
        int32_t ebp_1
        
        if ((ebx.b & 1) == 0)
            ebp_1 = esi[0xc]
        else
            int32_t eax_2
            eax_2, arg2 = MulDiv(esi[0xc], nNumerator, arg3)
            ebp_1 = eax_2
        
        int32_t var_18_1
        
        if ((ebx.b & 2) == 0)
            var_18_1 = esi[0xd]
        else
            int32_t eax_5
            eax_5, arg2 = MulDiv(esi[0xd], nNumerator, arg3)
            var_18_1 = eax_5
        
        int32_t var_14_1
        int32_t eax_11
        
        if ((ebx.b & 4) == 0 || (*(esi + 0x41) & 1) != 0)
            var_14_1 = esi[0xe]
        else if ((ebx.b & 1) == 0)
            eax_11, arg2 = MulDiv(esi[0xe], nNumerator, arg3)
            var_14_1 = eax_11
        else
            int32_t eax_10
            eax_10, arg2 = MulDiv(esi[0xc] + esi[0xe], nNumerator, arg3)
            var_14_1 = eax_10 - ebp_1
        
        eax_11.b = (ebx.b & 8) != 0
        int32_t eax_18
        
        if (eax_11.b == 0 || (*(esi + 0x41) & 2) != 0)
            eax_18 = esi[0xf]
        else
            arg2.b = (ebx.b & 8) != 0
            
            if (eax_11.b == 0)
                eax_18 = MulDiv(esi[0xd], nNumerator, arg3)
            else
                eax_18 = MulDiv(esi[0xd] + esi[0xf], nNumerator, arg3) - var_18_1
        
        (*(*esi + 0x7c))(eax_18, var_14_1)
        
        if (*(esi + 0x49) == 0 && (ebx.b & 0x10) != 0)
            void* ebx_1 = esi[0x16]
            sub_418b8c(ebx_1, MulDiv(sub_418b70(ebx_1), nNumerator, arg3))
    
    arg1.b = 0
    esi[0x22].b = 0
    return arg1
}
