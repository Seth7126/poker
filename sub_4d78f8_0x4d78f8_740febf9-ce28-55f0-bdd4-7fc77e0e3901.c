// ============================================================
// 函数名称: sub_4d78f8
// 虚拟地址: 0x4d78f8
// WARP GUID: 740febf9-ce28-55f0-bdd4-7fc77e0e3901
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402c90, sub_47a180, sub_47a1c0, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_516eec, sub_4e649b
// ============================================================

void* __fastcallsub_4d78f8(char arg1, int32_t arg2)
{
    // 第一条实际指令: bool o = unimplemented  {imul eax, edi, 0x1038}
    bool o = unimplemented  {imul eax, edi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* result_1 = *(data_61c8c8 + 0xab0) + arg2 * 0x81c0
    sub_47a180(1, arg2, data_61c8c8, 1)
    void* result = result_1
    int32_t esi = sx.d(*(result + 0x8130))
    
    if (esi s>= 2)
        int32_t i_1 = esi - 1
        int32_t ebx_1 = 2
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul eax, ebx, 0x23}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(result_1 + ebx_1 * 0x118 - 0x9c) != 0x309)
                bool o_2 = unimplemented  {imul eax, ebx, 0x23}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t ecx_2
                ecx_2.b = *(result_1 + ebx_1 * 0x118 - 0xf0)
                result = sub_402c90(result_1 + ebx_1 * 0x118 - 0xf0, sub_4d7a11+3, ecx_2 + 1)
                
                if (ecx_2 != 0xffffffff)
                    if (arg2 != data_61cad4)
                    label_4d79d5:
                        
                        if (arg2 != data_61cae4)
                            result.b = arg1
                            result = sub_47a180(ebx_1, arg2, data_61c8c8, result.b)
                        else
                            int32_t eax_8 = data_61cbac
                            result = eax_8 - 1
                            
                            if (add_overflow(eax_8, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            if (ebx_1 s< result)
                                result.b = arg1
                                result = sub_47a180(ebx_1, arg2, data_61c8c8, result.b)
                    else
                        int32_t eax_7 = data_61cb80
                        result = eax_7 - 1
                        
                        if (add_overflow(eax_7, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (ebx_1 s< result)
                            goto label_4d79d5
            else if (arg1 == 0)
                result = sub_47a1c0(ebx_1, arg2, data_61c8c8, 1)
            else
                result = sub_47a1c0(ebx_1, arg2, data_61c8c8, 0)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
