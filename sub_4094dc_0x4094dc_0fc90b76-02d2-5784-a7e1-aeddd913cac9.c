// ============================================================
// 函数名称: sub_4094dc
// 虚拟地址: 0x4094dc
// WARP GUID: 0fc90b76-02d2-5784-a7e1-aeddd913cac9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40aff4, sub_40a48c
// ============================================================

int32_t __convention("regparm")sub_4094dc(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    void* esi = arg1
    int32_t result = 0
    int32_t i = arg3
    
    if (i != 0)
        while (i != 0)
            bool cond:0_1 = 0 != *edi
            edi += 1
            i -= 1
            
            if (not(cond:0_1))
                break
        
        int32_t ecx = arg3 - i
        void* edi_1 = arg2
        bool cond:2_1 = true
        
        while (true)
            if (ecx != 0)
                char temp0_1 = *esi
                char temp1_1 = *edi_1
                cond:2_1 = temp0_1 == temp1_1
                esi += 1
                edi_1 += 1
                ecx -= 1
                
                if (temp0_1 == temp1_1)
                    continue
            
            if (cond:2_1)
                break
            
            result.b = *(esi - 1)
            
            if (result.b u>= 0x61 && result.b u<= 0x7a)
                result.b -= 0x20
            
            int32_t edx
            edx.b = *(edi_1 - 1)
            
            if (edx.b u>= 0x61 && edx.b u<= 0x7a)
                edx.b -= 0x20
            
            int32_t result_1 = result
            result -= edx
            cond:2_1 = result_1 == edx
            
            if (result_1 != edx)
                break
    
    return result
}
