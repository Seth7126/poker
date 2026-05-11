// ============================================================
// 函数名称: sub_431e20
// 虚拟地址: 0x431e20
// WARP GUID: f7a04f44-3c36-5b23-bce9-cfb17cafab85
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e838, sub_42e7fc
// [被调用的父级函数]: sub_443028
// ============================================================

void* __fastcallsub_431e20(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* result = sub_42e838(arg3)
    void* result = sub_42e838(arg3)
    
    if (result - 1 s>= 0)
        void* ebx_2 = result
        int32_t esi_1 = 0
        void* i
        
        do
            result = sub_42e7fc(arg3, esi_1)
            
            if (*(result + 4) == arg2)
                result = arg4()
            
            esi_1 += 1
            i = ebx_2
            ebx_2 -= 1
        while (i != 1)
    
    return result
}
