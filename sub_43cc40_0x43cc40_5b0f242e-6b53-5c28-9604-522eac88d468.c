// ============================================================
// 函数名称: sub_43cc40
// 虚拟地址: 0x43cc40
// WARP GUID: 5b0f242e-6b53-5c28-9604-522eac88d468
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b974, sub_43cc40, sub_43b964
// [被调用的父级函数]: sub_43ccd8, sub_43cc40
// ============================================================

void* __convention("regparm")sub_43cc40(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8:3.b = 0
    
    if ((*(arg2 - 1) != 0 || *(arg2 - 8) != zx.d(*(arg1 + 0x44)))
            && (*(arg2 - 1) != 1 || *(arg2 - 8) != *(arg1 + 0x28))
            && (*(arg2 - 1) != 2 || *(arg2 - 8) != zx.d(*(arg1 + 0x54))))
        void* esi_2 = sub_43b964(arg1) - 1
        
        if (esi_2 s>= 0)
            void* i_1 = esi_2 + 1
            int32_t edi_1 = 0
            void* i
            
            do
                sub_43b974(arg1, edi_1)
                
                if (sub_43cc40(arg2).b != 0)
                    var_8:3.b = 1
                    break
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        *(arg2 - 0xc) = arg1
        var_8:3.b = 1
    
    void* result
    result.b = var_8:3.b
    return result
}
