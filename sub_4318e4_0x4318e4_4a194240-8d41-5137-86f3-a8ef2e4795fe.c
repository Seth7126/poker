// ============================================================
// 函数名称: sub_4318e4
// 虚拟地址: 0x4318e4
// WARP GUID: 4a194240-8d41-5137-86f3-a8ef2e4795fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e838, sub_42e7fc, sub_40faac
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4318e4(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_40faac(0, 0x7fffffff, 0x7fffffff, arg2, 0)
    sub_40faac(0, 0x7fffffff, 0x7fffffff, arg2, 0)
    void* result = sub_42e838(arg1)
    
    if (result - 1 s>= 0)
        void* esi_2 = result
        int32_t ebp_1 = 0
        void* i
        
        do
            result = sub_42e7fc(arg1, ebp_1)
            
            if (*(result + 0x47) != 0)
            label_431931:
                
                if (*arg2 s> *(result + 0x30))
                    *arg2 = *(result + 0x30)
                
                if (arg2[1] s> *(result + 0x34))
                    arg2[1] = *(result + 0x34)
                
                if (*(result + 0x30) + *(result + 0x38) s> arg2[2])
                    arg2[2] = *(result + 0x30) + *(result + 0x38)
                
                if (*(result + 0x34) + *(result + 0x3c) s> arg2[3])
                    arg2[3] = *(result + 0x34) + *(result + 0x3c)
            else if ((*(result + 0x20) & 0x10) != 0 && (*(result + 0x41) & 4) == 0)
                goto label_431931
            
            ebp_1 += 1
            i = esi_2
            esi_2 -= 1
        while (i != 1)
    
    return result
}
