// ============================================================
// 函数名称: sub_4309f4
// 虚拟地址: 0x4309f4
// WARP GUID: ba6828fb-c6fc-5a31-8038-64a7e97efc71
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_42e7fc, sub_42c754, sub_42e838, sub_4309f4
// [被调用的父级函数]: sub_4309f4, sub_430aa4
// ============================================================

int32_t* __convention("regparm")sub_4309f4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char var_9 = 0
    char var_9 = 0
    
    if (arg1[0x5a].b != 0)
        void* esi_2 = sub_42e838(arg1) - 1
        
        if (esi_2 s>= 0)
            void* i_1 = esi_2 + 1
            int32_t edi_1 = 0
            void* i
            
            do
                int32_t* ebx_1 = sub_42e7fc(arg1, edi_1)
                
                if (*(ebx_1 + 0x47) != 0 && (*(*ebx_1 + 0x4c))().b != 0)
                    if ((*(ebx_1 + 0x42) & 1) != 0)
                        *(*(arg2 - 4) + 4)
                        sub_42c754(ebx_1, *(*(arg2 - 4) + 8))
                    
                    if (sub_403248(ebx_1, 0x427f2c).b != 0 && sub_4309f4(arg2).b != 0)
                        var_9 = 1
                        break
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    int32_t* result
    result.b = var_9
    return result
}
