// ============================================================
// 函数名称: sub_4461e0
// 虚拟地址: 0x4461e0
// WARP GUID: 09ea2c4f-bd78-5d19-b518-78828cb8792d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_443af0, sub_443aa4
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4461e0(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    void* ebx = arg1
    
    if (*(ebx + 0x217) == 2)
        var_10.b = 0
        void* esi_2 = sub_443aa4(ebx) - 1
        
        if (esi_2 s>= 0)
            void* i_1 = esi_2 + 1
            int32_t edi_1 = 0
            void* i
            
            do
                if ((*(*sub_443af0(ebx, edi_1) + 0xd0))(var_10).b == 0)
                    goto label_44623b
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    var_10.b = 1
    
    if (*(ebx + 0x282) != 0)
        *(ebx + 0x284)
        (*(ebx + 0x280))(1)
    
    label_44623b:
    arg1.b = var_10.b
    return arg1
}
