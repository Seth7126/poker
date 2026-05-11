// ============================================================
// 函数名称: sub_446644
// 虚拟地址: 0x446644
// WARP GUID: 7f526199-7845-54f1-881d-35a1e65e84ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e838, sub_403248, sub_42e7fc, sub_446644
// [被调用的父级函数]: sub_4466b4, sub_446644
// ============================================================

void* __convention("regparm")sub_446644(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* result = arg1
    
    if (*(result + 0x168) != 0)
        result = sub_42e838(arg1)
        
        if (result - 1 s>= 0)
            void* esi_3 = result
            int32_t edi_1 = 0
            void* i
            
            do
                int32_t* eax_2 = sub_42e7fc(arg1, edi_1)
                
                if ((*(eax_2 + 0x41) & 0x80) != 0 && *(eax_2 + 0x47) != 0)
                    (*(*eax_2 + 0x70))()
                
                result = sub_403248(eax_2, 0x427f2c)
                
                if (result.b != 0)
                    result = sub_446644(arg2)
                
                edi_1 += 1
                i = esi_3
                esi_3 -= 1
            while (i != 1)
    
    return result
}
