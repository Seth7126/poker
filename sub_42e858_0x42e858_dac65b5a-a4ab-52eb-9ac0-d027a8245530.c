// ============================================================
// 函数名称: sub_42e858
// 虚拟地址: 0x42e858
// WARP GUID: dac65b5a-a4ab-52eb-9ac0-d027a8245530
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e838, sub_42e7fc
// [被调用的父级函数]: sub_430df8, sub_42e898, sub_431014, sub_430ffc, sub_43108c, sub_430e00, sub_43100c, sub_430df0, sub_431004
// ============================================================

int32_t __convention("regparm")sub_42e858(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    int32_t result = sub_42e838(arg1)
    
    if (result - 1 s>= 0)
        int32_t ebx_2 = result
        int32_t edi_1 = 0
        int32_t i
        
        do
            void* eax_2 = sub_42e7fc(arg1, edi_1)
            *(eax_2 + 0x2c)
            result = (*(eax_2 + 0x28))(arg1)
            
            if (*(arg2 + 0xc) != 0)
                break
            
            edi_1 += 1
            i = ebx_2
            ebx_2 -= 1
        while (i != 1)
    
    return result
}
