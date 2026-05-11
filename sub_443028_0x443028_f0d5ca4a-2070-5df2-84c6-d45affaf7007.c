// ============================================================
// 函数名称: sub_443028
// 虚拟地址: 0x443028
// WARP GUID: f0d5ca4a-2070-5df2-84c6-d45affaf7007
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416348, sub_41631c, sub_4032ac, sub_431e20
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_443028(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* result = sub_431e20(arg1, arg2, arg3, arg4, arg5)
    void* result = sub_431e20(arg1, arg2, arg3, arg4, arg5)
    
    if (arg3 == arg2)
        result = sub_416348(arg3) - 1
        
        if (result s>= 0)
            void* i_1 = result + 1
            int32_t var_8 = 0
            void* i
            
            do
                int32_t ebx
                ebx.w = 0xfff2
                result = sub_4032ac(sub_41631c(arg3, var_8))
                
                if (result.b == 0)
                    result = arg4()
                
                var_8 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
